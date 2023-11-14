#include "shell.h"
/**
 * execute - execute commands
 * @argv: arguments will be executed
 * Return: 0 in success
 */
int execute(char **argv)
{
pid_t pid;
int status;
char *command = path_handle(argv[0]);

pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
if (pid == 0)
{
execve(command, argv, environ);
perror("execve");
exit(EXIT_FAILURE);
}
else
{
wait(&status);
}
return (EXIT_SUCCESS);
}
