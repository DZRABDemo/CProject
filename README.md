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
- /home/your-username/your-project

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