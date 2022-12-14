# eclair_report

quiet()

setq(data_dir,getenv("ECLAIR_DATA_DIR"))
setq(output_dir,getenv("ECLAIR_OUTPUT_DIR"))
setq(ecd_file,join_paths(output_dir,"PROJECT.ecd"))

create_db(ecd_file)

loading()
strings_map("load_ecb",500,"",".+\\.ecb",0,setq(ecb,join_paths(data_dir,$0)),load(ecb))
strings_map("load_ecb",500,"",".*",0)

map_strings("load_ecb", dir_entries(data_dir))
loaded()

setq(output_dir,getenv("ECLAIR_OUTPUT_DIR"))

# Full output in pure text format.
full_txt(join_paths(output_dir,"txt"))
# Output metrics for use with spreadsheet applications (if enabled).
metrics_tab(join_paths(output_dir,"metrics"))
# Output reports for use with spreadsheet applications
reports_tab(join_paths(output_dir,"reports"))

# Show only first area in reports
first_area()
# Full output in ODT format.
full_odt(join_paths(output_dir,"odt"))
# Full output in ODT format.
full_doc(join_paths(output_dir,"doc"))

reports_sarif("reports.sarif")
reports_jenkins("jenkins.xml")
reports_codeclimate("gl-code-quality-report.json")
