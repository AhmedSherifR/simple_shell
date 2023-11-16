#include "shell.h"
/**
 *main - execute the input
 *@ac: empty argv number
 *@argv: arguments that benn entered
 *@env: environment vriable list
 *Return: 0 in sucess
 */
int main(int ac, char **argv, char **env)
{
int mode = 1;
size_t nc = 0;
char *line = NULL;
ssize_t n_read = 0;

(void)ac;

	while (mode)
	{
	n_read = getline(&line, &nc, stdin);
	if (!line)
	{
		continue;
	}
	if (line[0] == '\n')
	{
		continue;
	}
	if (n_read < 0)
	{
		break;
	}
	if (strcmp(line, "env\n") == 0)
	{
	envlist(env);
	free(line);
	line = NULL;
	continue;
	}

	if (strcmp(line, "exit\n") == 0)
	break;

	argv = tokenizing(line);
	execute(argv);
	free(line);
	line = NULL;
	free(argv);
	}
free(line);
exit(EXIT_SUCCESS);
}
