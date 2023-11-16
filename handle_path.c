#include "shell.h"
/**
 * path_handle - return path of command
 * @command: command to get the path of
 * Return: file_path if success(argv[0] or new one)
 */
char *path_handle(char *command)
{
char *path, *copy, *token, *file_path;
int c_length, d_length;
struct stat buffer;

path = getenv("PATH");
if (path)
{
copy = strdup(path);
c_length = strlen(command);
token = strtok(copy, ":");
while (token != NULL)
{
d_length = strlen(token);
file_path = malloc(c_length + d_length + 2);
strcpy(file_path, token);
strcat(file_path, "/");
strcat(file_path, command);
strcat(file_path, "\0");
if (stat(file_path, &buffer) == 0)
{
free(copy);
return (file_path);
}
else
{
free(file_path);
token = strtok(NULL, ":");
}
}
free(copy);
if (stat(command, &buffer) == 0)
{
return (command);
}
return (NULL);
}
return (NULL);
}
