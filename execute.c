#include "shell.h"
int execute(char **argv)
{
pid_t pid;
int status;
char*command = path_handle(argv[0]);	
  pid = fork();
  if (pid == 0) {
    
    if (execve(command, argv, environ) == -1) {
      perror("Error:");
    }
    exit(EXIT_FAILURE);
  } else if (pid < 0) {
    
    perror("Error");
  } else {
	wait(&status);
  }

  return 1;
}
