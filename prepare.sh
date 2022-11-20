#!/bin/sh

set -eu

HERE=$(dirname "$0")

# shellcheck source=./ECLAIR/eclair_settings.sh
. "${HERE}/ECLAIR/eclair_settings.sh"

cmake -DCMAKE_C_COMPILER=cc "-DCMAKE_BUILD_TYPE=$1" -G Ninja "${HERE}/src"
