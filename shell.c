#include "shell.h"
/**
 *main - read commands and excute it
 *@ac: void number of arguments
 *@argv: commands tokeinzed
 *Return: 0 when success
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
	_putchar('|');
	_putchar('>');
	_putchar('_');
	n_read = getline(&line, &nc, stdin);
	if (n_read == -1)
	{
		printf("exiting...\n");
		return (-1);
	}
	argv = token(line);
	execute(argv);
	free(argv);
	}
free(line);
return (0);
}
