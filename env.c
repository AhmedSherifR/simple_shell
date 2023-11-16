#include "shell.h"
/**
 * envlist - print environment variables
 * @env: Current environment variables
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
