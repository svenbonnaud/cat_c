#ifndef STU_H_
#define STU_H_
void reader(int fd);
void msg_error_fd(char **av, int i, int fd);
unsigned int stu_strlen(const char *str);
void helper();
void function(int i, int fd, char **av);
#endif
