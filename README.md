# C Prime Plus

《C Prime Plus》学习代码仓库，收录教材示例程序与章节编程练习，适合配合阅读教材进行 C 语言基础学习。

> 本仓库为个人自用学习记录。

## 目录结构

```text
.
├── example_code/   # 教材示例程序
└── exercise_code/  # 章节练习解答
```

`exercise_code` 中的文件以“章节_练习题号”命名。例如：

- `2_12_t1.c`：第 2 章第 12 节练习 1
- `3_11_t4.c`：第 3 章第 11 节练习 4
- `4_8_t1.c`：第 4 章第 8 节练习 1

## 编译与运行

本仓库使用标准 C 源文件，可用 GCC、Clang 或其他兼容 C 编译器编译。

以 GCC 为例：

```bash
gcc example_code/first.c -o first
./first
```

Windows PowerShell 中可执行：

```powershell
gcc .\exercise_code\2_12_t1.c -o exercise.exe
.\exercise.exe
```

## 说明

- 示例与练习代码以学习和复现教材内容为目的。
- 编译生成的 Windows 可执行文件（`*.exe`）不纳入版本控制。
- 代码会随着学习进度持续补充；欢迎提出改进建议或提交勘误。

## 使用建议

建议先自行完成练习，再参考 `exercise_code` 中的实现，并尝试修改代码、重新编译和观察输出，从而理解语法与程序运行过程。
