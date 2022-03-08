***这里我们默认使用VSCODE进行编译***

***这里需要了解launch.json和tasks.json***

***前者用于调试 后者用于编译***

## ***1.launch.json***

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceRoot}/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceRoot}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "D:\\MINGW\\bin\\gdb.exe",
            "preLaunchTask": "gcc", //tasks.json里面的名字
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}
```

## ***2.tasks.json***

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "gcc",
            "type": "shell",
            "command": "gcc",
            "args": [
                "-g", "${file}","-o","${fileBasenameNoExtension}.exe"
            ],
            "group":{
                "kind": "build",
                "isDefault": true
            }
        }

    ]
}
```

## *3.配置文件介绍*

```
Visual Studio Code 支持在 Debugging and Task配置文件中替换变量，并支持某些选择设置。使用 ${variableName} 语法在和文件中的某些键和值字符串中支持变量替换。launch.json  tasks.json

支持的预定义变量如下:
${workspaceFolder} 
- 在VSCode中打开的文件夹的路径
- /home/your-username/your-project/

${workspaceFolderBasename} 
- 在VSCode中打开的文件夹的名称，不带任何斜杠 （/）
- your-project

${file} 
- 当前打开的文件
- /home/your-username/your-project/folder/file.ext

${fileWorkspaceFolder} 
- 当前打开的文件的工作区文件夹
- /home/your-username/your-project

${relativeFile} 
- 相对于workspaceFolder
- folder/file.ext

${relativeFileDirname} 
- 当前打开的文件的目录名称相对于workspaceFolder
- folder

${fileBasename} 
- 当前打开的文件的基本名称
- file.ext

${fileBasenameNoExtension} 
- 当前打开的文件的基名，没有文件扩展名
- file

${fileDirname} 
- 当前打开的文件的目录名称
- /home/your-username/your-project/folder

${fileExtname} 
- 当前打开的文件扩展名
- .ext

${cwd} 
- 启动时任务运行程序的当前工作目录

${lineNumber} 
- 活动文件中当前选定的行号

${selectedText} 
- 活动文件中当前选定的文本

${execPath} 
- 正在运行的VSCode可执行文件的路径

${defaultBuildTask} 
- 默认生成任务的名称

${pathSeparator} 
- 操作系统用于分隔文件路径中组件的字符
```



## *4.gcc命令*

```
D:\Project\CProject\DataType>gcc --help
Usage: gcc [options] file...
Options:
  -pass-exit-codes         Exit with highest error code from a phase.
  --help                   Display this information.
  --target-help            Display target specific command line options.
  --help={common|optimizers|params|target|warnings|[^]{joined|separate|undocumented}}[,...].
                           Display specific types of command line options.
  (Use '-v --help' to display command line options of sub-processes).
  --version                Display compiler version information.
  -dumpspecs               Display all of the built in spec strings.
  -dumpversion             Display the version of the compiler.
  -dumpmachine             Display the compiler's target processor.
  -print-search-dirs       Display the directories in the compiler's search path.
  -print-libgcc-file-name  Display the name of the compiler's companion library.
  -print-file-name=<lib>   Display the full path to library <lib>.
  -print-prog-name=<prog>  Display the full path to compiler component <prog>.
  -print-multiarch         Display the target's normalized GNU triplet, used as
                           a component in the library path.
  -print-multi-directory   Display the root directory for versions of libgcc.
  -print-multi-lib         Display the mapping between command line options and
                           multiple library search directories.
  -print-multi-os-directory Display the relative path to OS libraries.
  -print-sysroot           Display the target libraries directory.
  -print-sysroot-headers-suffix Display the sysroot suffix used to find headers.
  -Wa,<options>            Pass comma-separated <options> on to the assembler.
  -Wp,<options>            Pass comma-separated <options> on to the preprocessor.
  -Wl,<options>            Pass comma-separated <options> on to the linker.
  -Xassembler <arg>        Pass <arg> on to the assembler.
  -Xpreprocessor <arg>     Pass <arg> on to the preprocessor.
  -Xlinker <arg>           Pass <arg> on to the linker.
  -save-temps              Do not delete intermediate files.
  -save-temps=<arg>        Do not delete intermediate files.
  -no-canonical-prefixes   Do not canonicalize paths when building relative
                           prefixes to other gcc components.
  -pipe                    Use pipes rather than intermediate files.
  -time                    Time the execution of each subprocess.
  -specs=<file>            Override built-in specs with the contents of <file>.
  -std=<standard>          Assume that the input sources are for <standard>.
  --sysroot=<directory>    Use <directory> as the root directory for headers
                           and libraries.
  -B <directory>           Add <directory> to the compiler's search paths.
  -v                       Display the programs invoked by the compiler.
  -###                     Like -v but options quoted and commands not executed.
  -E                       Preprocess only; do not compile, assemble or link.
  -S                       Compile only; do not assemble or link.
  -c                       Compile and assemble, but do not link.
  -o <file>                Place the output into <file>.
  -pie                     Create a dynamically linked position independent
                           executable.
  -shared                  Create a shared library.
  -x <language>            Specify the language of the following input files.
                           Permissible languages include: c c++ assembler none
                           'none' means revert to the default behavior of
                           guessing the language based on the file's extension.

Options starting with -g, -f, -m, -O, -W, or --param are automatically
 passed on to the various sub-processes invoked by gcc.  In order to pass
 other options on to these processes the -W<letter> options must be used.

For bug reporting instructions, please see:
<https://sourceforge.net/projects/mingw-w64>.

```