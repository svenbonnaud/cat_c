Cat Project

Overview

This project is a simple implementation of the cat command, which reads and outputs the contents of files or standard input. It was developed as part of the E89 Pedagogical & Technical Lab.

Project Details

Project Name: cat

Creation Date: 2023-12-01

Author: Sven Bonnaud

Description

The program reads the contents of files specified as command-line arguments and prints them to the standard output. If no arguments are provided, it reads from standard input.

Compilation

To compile the program, use the following command:

gcc -Wall -Wextra -Werror -o cat_program main.c stu.c

Ensure you have all necessary source files, including stu.h.

Usage

Run the program as follows:

./cat_program file1.txt file2.txt

Or read from standard input:

./cat_program

Then type text, followed by Ctrl+D (EOF) to display the input.

Code Explanation

If no arguments are provided, the program reads from standard input using reader(0);.

If file names are provided as arguments, it opens each file, processes it using function(i, fd, av);, and closes it after reading.

Dependencies

<fcntl.h> for file control options.

<unistd.h> for read, write, and close system calls.

stu.h (assumed to contain reader() and function() declarations).

Notes

Ensure function() and reader() are correctly implemented in stu.c or related files to avoid compilation issues.

License

This project is for educational purposes and follows the guidelines of the E89 Pedagogical & Technical Lab.

Feel free to update this README as needed!
