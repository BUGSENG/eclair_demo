-doc="See Section 4.4 (page 396) of gcc.pdf and Section 3.1.2 (page 11) of x86_64-abi-0.99.pdf."
-config=STD.bytebits,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "8"}

-doc="See Section 4.4 (page 396) of gcc.pdf and the documentation of -fexec-charset=charset and -finput-charset=charset (page 180) of the same manual."
-config=STD.charsmap,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 4.4 (page 396) of gcc.pdf and the documentation of -fexec-charset=charset and -finput-charset=charset (page 180) in the same manual."
-config=STD.charsmem,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "ascii"}

-doc="See Section 4.1 (page 395) of gcc.pdf."
-config=STD.diagidnt,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 4.4 (page 396) of gcc.pdf and the documentation of -fexec-charset=charset (page 180) in the same manual."
-config=STD.execvals,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 25.7 (page 784 and following of libc.pdf."
-config=STD.exitstat,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc_begin="See Section 2 (page 7 and following) of cpp.pdf."
-config=STD.inclangl,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}
-config=STD.inclfile,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}
-config=STD.inclhead,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}
-doc_end

-doc="See Section 25 (page 745 and following) of libc.pdf."
-config=STD.mainargv,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 4.5 (page 397) of gcc.pdf."
-config=STD.signdint,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 4.15 (page 402) of gcc.pdf and Section 3.1.2 (page 11 and following) of x86_64-abi-0.99.pdf."
-config=STD.objbytes,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}

-doc="See Section 3.4 (page 16 and following of cpp.pdf"
-config=STD.stringfy,behavior={c11,"^(?i)(.*[/\\\\])?gcc(\\.exe)?$", "specified"}
