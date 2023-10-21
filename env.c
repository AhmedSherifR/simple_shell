#include "shell.h"
/**
 * env - print eniron
 * Return: Void
 */


void env(void)
{
char **env = environ;

for (; *env; ++env)
{
printf("%s\n", *env);
}
}
