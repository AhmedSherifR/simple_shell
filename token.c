#include "shell.h"
/**
 *token - tokeinzing the line
 *@line: line user entered
 *
 *Return: array oof string
 */

char **token(char *line)
{
char **args = NULL;
char *tokens = NULL;
const char *delim = " \n";
args = (char **)malloc(sizeof(char *) * 2);
tokens = strtok(line, delim);
args[0] = tokens;
args[1] = NULL;


return (args);
}
