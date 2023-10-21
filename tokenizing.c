#include "shell.h"

char** tokenizing(char *line) {
    int len = 0;
    int cap = 16;
    char **tokens = malloc(cap * sizeof(char*));

    char *delimiters = " \t\r\n";
    char *token = strtok(line, delimiters);

    while (token != NULL) {
        tokens[len] = token;
        len++;

        if (len >= cap) {
            cap = (int) (cap * 1.5);
            tokens = realloc(tokens, cap * sizeof(char*));
        }

        token = strtok(NULL, delimiters);
    }

    tokens[len] = NULL;
    return (tokens);
}
