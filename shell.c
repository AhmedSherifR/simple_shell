#include "shell.h"

int main(int ac, char **argv)
{
int mode = 1;
char*line = NULL ;
size_t nc = 0;
ssize_t n_read = 0;

(void)ac;

	while(mode)
	{
	prompt();
	n_read = getline(&line, &nc, stdin);
	if (n_read == -1)
	{
		return (-1);
	}
	if (strcmp(line, "env") == 0)
	{
	env();
	continue;
	}
	argv = tokenizing(line);
	execute(argv);
	free(argv);
	}
free(line);
return (0);
}
