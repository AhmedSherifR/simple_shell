#include "shell.h"
/**
 *execute - execute system calls
 *@argv: pointer of commands strings
 *
 *Return: 1 in success,EXIT_FALLURE in fail
 */

int execute(char **argv)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
	if (execve(argv[0], argv, environ) == -1)
	{
	perror("Erorr:");
	}
	exit(EXIT_FAILURE);
}
else if (pid < 0)
{
perror("Erorr");
}
else
{
wait(&status);
}
return (1);
}
