/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-01 - 15:05 +0100
 * 1st author:  sven.bonnaud - sven.bonnaud
 * description: main
 */
#include "stu.h"
#include <fcntl.h>
#include <unistd.h>


int main(int ac, char **av)
{
    int fd;
    int i;

    i = 1;
    if (ac == 1) {
        reader(0);
    } else {
        while (i < ac) {
            fd = open(av[i], O_RDONLY);
            function (i, fd, av);
            i += 1;
            close(fd);
        }
    }
    return 0;
}
