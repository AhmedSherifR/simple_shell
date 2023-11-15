#include "shell.h"
/**
 * envlist - print eniron
 * Return: Void
 */


void envlist(char **env)
{
char **enl = env;
int i = 0;

while (enl[i] != NULL) 
{
printf("%s\n", enl[i]);
i++;
}
}
