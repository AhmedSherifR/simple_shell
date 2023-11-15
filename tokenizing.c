#include "shell.h"
/**
 * tokenizing - token the line command
 * @line: command to be tokenized
 * Return: tokens of the args
 */
char **tokenizing(char *line)
{
int len = 0;
int cap = 16;
char **tokens = malloc(cap * sizeof(char *));
char *delimiters = " \t\r\n";
char *linec = line;
char *token = strtok(linec, delimiters);

while (token != NULL)
{
tokens[len] = token;
len++;
if (len >= cap)
{
cap = (int) (cap * 1.5);
tokens = realloc(tokens, cap *sizeof(char *));
}
token = strtok(NULL, delimiters);
}
tokens[len] = NULL;
return (tokens);
}
