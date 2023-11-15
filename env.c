#include "shell.h"
/**
 * envlist - print eniron
 * Return: Void
 */


void envlist(char **env)
{
char **enl = env;

for (; *enl; ++enl)
{
printf("%s\n", *enl);
}
}
