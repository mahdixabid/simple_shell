#ifndef shell_h
#define shell_h
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
extern char **environ;
int _getline(char *string,size_t size, ssize_t bytes_read);
int _strlen(char *s);
char _strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strtok(char *str, const char *token);
void _fork();
void my_signal(int sig);
volatile sig_atomic_t flag = 0;
int _stat(int ac, char **av);
#endif
