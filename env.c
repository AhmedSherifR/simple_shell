#include "shell.h"

void env(void)
{
char **env = environ;

for (; *env; ++env)
{
printf("%s\n", *env);
}
}
