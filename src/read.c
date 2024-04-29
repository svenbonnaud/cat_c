/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-08 - 16:12 +0100
 * 1st author:  sven.bonnaud - sven.bonnaud
 * description: read
 */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void reader(int fd)
{
    char *buffer;
    int size_read;

    buffer = malloc(sizeof (char * ) * 100);
    size_read = 1;
    while (size_read > 0) {
        size_read = read(fd, buffer, 100);
        write(1, buffer, size_read);
    }
}

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

void msg_error_fd(char **av, int i, int fd)
{
    strerror(fd);
    write(1, av[0], stu_strlen(av[0]));
    write(1,": ", 2);
    write(1, av[i], stu_strlen(av[i]));
    write(1, ":Cannot procss file.\n", 21);
}

void helper()
{
    char *message1;

    message1 = "Usage: cat [OPTION]...[FILE]...\n Concatenate FILE(s) to"
             "standard output.\n \n With no FILE, or when FILE is -, read "
             "standard input.\n      -h       display this help and exit\n\n";
    write(1, message1, stu_strlen(message1));
}

void function(int i, int fd, char **av)
{
    if (av[i][0] == '-' && av[i][1] == '\0') {
        reader(0);
    }
    if (av[i][0] == '-' && av[i][1] == 'h') {
        helper();
    } else {
        if (fd == -1 && av[i][1] != '\0') {
            msg_error_fd(av, i, fd);
        }
        reader(fd);
    }
}
