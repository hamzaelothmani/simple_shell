#include "shell.h"

/**
 * shell - a shell using c
 * @arv: argument by user
 * @interactive: is in interactive mode or not
 */
void shell(char **arv, bool interactive)
{
	size_t n = 0;
	ssize_t num_c = 0;
	char *cmd = NULL, *rgv[MAX_C];
	int x;

	while (1)
	{
		if (interactive && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));

		num_c = getline(&cmd, &n, stdin);
		if (num_c == -1)
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		if (cmd[num_c - 1] == '\n')
			cmd[num_c - 1] = '\0';
		cmd = trim(cmd);
		if (_strlen(cmd) == 0)
			continue;
		x = 0;
		rgv[x] = strtok(cmd, " \n");
		handleExit(cmd);
		handlePath(rgv, cmd);
		while (rgv[x])
		{
			x++;
			rgv[x] = strtok(NULL, " \n");
		}
		runCmd(rgv, arv);
	}
}
