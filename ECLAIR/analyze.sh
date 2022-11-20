#!/bin/bash

set -eu
set -o pipefail

HERE=$(cd "$(dirname "$0")" ; echo "${PWD}")
TOP=${HERE%/*}

# shellcheck source=./eclair_settings.sh
. "${HERE}/eclair_settings.sh"

export ECLAIR_PROJECT_NAME="${TOP##*/}"
export ECLAIR_PROJECT_ROOT="${TOP}"

export ECLAIR_OUTPUT_DIR="${TOP}/ECLAIR_out"
export ECLAIR_DATA_DIR="${TOP}/.data"
# Set the variable for the diagnostics.
export ECLAIR_DIAGNOSTICS_OUTPUT="${ECLAIR_OUTPUT_DIR}/ANALYSIS.log"

# Set the variable for the build log file.
ECLAIR_BUILD_LOG=${ECLAIR_OUTPUT_DIR}/BUILD.log
# Set the variable for the report log file.
ECLAIR_REPORT_LOG=${ECLAIR_OUTPUT_DIR}/REPORT.log

rm -rf "${ECLAIR_OUTPUT_DIR}" "${ECLAIR_DATA_DIR}"
mkdir -p "${ECLAIR_OUTPUT_DIR}" "${ECLAIR_DATA_DIR}"

"${TOP}/clean.sh"
"${ECLAIR_PATH}eclair_env" "-eval_file='${HERE}/analysis.ecl'" -- "${TOP}/build.sh" 2>&1 | tee "${ECLAIR_BUILD_LOG}"

"${ECLAIR_PATH}eclair_report" "-eval_file='${HERE}/report.ecl'" > "${ECLAIR_REPORT_LOG}" 2>&1
