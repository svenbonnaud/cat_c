# Cat Project

## What does the project do?

This project is a simple implementation of the `cat` command in C.  
It reads and outputs the contents of files or standard input, similar to the Unix `cat` command.

## Features

- Reads and displays the contents of files provided as command-line arguments.
- If no file is specified, it reads from standard input.
- Uses system calls to handle file operations.

## Technologies Used

- C programming language
- System calls: `open()`, `read()`, `write()`, and `close()`
- Libraries: `<fcntl.h>`, `<unistd.h>`

## How to Compile

Use the following command to compile the program:

```sh
gcc -Wall -Wextra -Werror -o cat_program main.c stu.c
