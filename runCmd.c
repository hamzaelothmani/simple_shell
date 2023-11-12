#include "shell.h"

/**
 * runCmd - a function that run command
 * @rgv: rgv argument
 * @arv: arv argument
 */
void runCmd(char **rgv, char **arv)
{
	pid_t myChild;
	int stat;

	myChild = fork();

	if (myChild == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (myChild == 0)
	{
		if (execve(rgv[0], rgv, NULL) == (-1))
		{
			write(STDOUT_FILENO, arv[0], _strlen(arv[0]));
			write(STDOUT_FILENO, ": No such file or directory",
				  _strlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
		}
		exit(EXIT_FAILURE);
	} else
	{
		wait(&stat);
	}
}
