{
   "cmd": ["make"],
   "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
   "working_dir": "${project_path:${folder:${file_path}}}",
   "selector": "source.makefile",
   "path": "/usr/bin/:/usr/local/texlive/2013/bin/i386-linux",

    "variants":
    [
      {
        "name": "Clean",
        "cmd": ["make", "clean"]
      },
      {
        "name": "Test",
        "cmd": ["make", "test"]
      }
    ]
}