# 0x00. C - Hello, World
The beggining of the c language.

## What to learn.
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Tasks and Lessons learnt

| File | Description | Lesson |
|------|-------------|--------|
| 0-preprocessor | Running a C file through preprocessor | preprocessing and environment variables. |
| 1-compiler | Compiling c file but does not link | Compilation flags. |
| 2-assembler | Writing a file that generates assembly code| Assembly language and conversion to object code. |
| 3-name | compiles a C file and creates an executable named cisfun | Specifing name for compiled executable c file. |
| 4-puts.c |Write a C program that prints exactly "Programming is like building a multilingual puzzle| Using puts to write to stdout |
| 5-printf.c | Write a C program that prints exactly with proper grammar, but the outcome is a piece of art, | Use of printf to print to stdout and exit codes. |
| 6-size.c | Write a C program that prints the size of various types on the computer | Printing size of data types in different architectures. |

## Topics and a few more things learnt.
- Basics of C and its beggining. 
- Standards of C: 
	1. "K & R"C (First), 
	2. ANSI C(C89/C90)[Most portable and most used, gcc's default]-ansi/ flag:-std=c89, 
	3. C90 [Most recent flag:-std=c99]

- Compilation Process and its flags.
	1. Preprocessing (gcc -E)
	2. Compilation (gcc -S)
	3. Assembly (gcc -c)
	4. Linking(Funtion calls and libraries)

- The hashbang #! directive. Kernel interpretes as executable and tries to run.
- Relationship between function declaration return type and the return value of a function.
- Modifiers(Increase size for the data type) and Data types.
- Typecasting.(Making a data type another)[Look into Type convesion]
- Input and output streams
- Linters and coding style.[Looking into creation of linters]

## Good Resouces
[Basics video part 1](https://youtu.be/rk2fK2IIiiQ?si=wtq5QE8Vuh-MrhjN)
[Basics video part 2](https://youtu.be/FwpP_MsZWnU?si=DRFIunuW7LucFLYN)
[Hash bang](https://twitter.com/unix_byte/status/1024147947393495040)
[Compilation Process](https://youtu.be/VDslRumKvRA?si=Jjrcdaz0ybxVEgDI)
[Betty Linter](https://github.com/alx-tools/Betty/wiki)
