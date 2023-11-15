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
char *cl = argv[0];
char *command = path_handle(cl);

pid = fork();
if (pid == -1)
{
perror("fork");
free(command);
exit(EXIT_FAILURE);
}
if (pid == 0)
{
execve(command, argv, environ);
perror("execve");
free(command);
exit(EXIT_FAILURE);
}
else
{
wait(&status);
}
if (command != argv[0])
free(command);

return (EXIT_SUCCESS);
}
