#include "shell.h"
/**
 *main - execute the input
 *@ac: empty argv number
 *@argv: arguments that benn entered
 *Return: 0 in sucess
 */

int main(int ac, char **argv)
{
int mode = 1;
char *line = NULL;
size_t nc = 0;
ssize_t n_read = 0;

(void)ac;

	while (mode)
	{
	n_read = getline(&line, &nc, stdin);
	if (line[0] == '\n')
	{
		continue;
	}
	if (n_read == -1)
	{
		return (0);
	}
	if (strcmp(line, "env") == 0)
	{
	env();
	free(line);
	line = NULL;
	continue;
	}

	if (strcmp(line, "exit\n") == 0)
	break;

	argv = tokenizing(line);
	execute(argv);
	line = NULL;
	free(argv);
	}
free(line);
exit(EXIT_SUCCESS);
}
