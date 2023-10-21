#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;

void prompt(void);
int _putchar(char c);
char** tokenizing(char *line);
int execute(char **argv);
char *path_handle(char *command);
void env(void);

#endif

