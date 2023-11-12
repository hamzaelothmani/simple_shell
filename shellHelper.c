#include "shell.h"

/**
 * handlePath - handle the path function
 * @rgv: rgv argument
 * @cmd: command set by the user
 * Return: command for exec
 */
char *handlePath(char **rgv, char *cmd)
{
	char *path;

	path = malloc(_strlen("/bin/") + _strlen(cmd) + 1);
	if (!path)
	{
		return (NULL);
	}
	_strCp(path, "/bin/");

	if (cmd[0] != '/' && cmd[0] != '.')
	{
		rgv[0] = _strCat(path, cmd);
		return (rgv[0]);
	}
	free(path);
	return (cmd);
}

/**
 * handleExit - function that terminate the prog when
 * user types "exit".
 * @cmd: the string to be read.
 * Return: nothing.
 *
 */
void handleExit(char *cmd)
{
	if (_strCmp("exit", cmd) == 0)
	{
		free(cmd);
		exit(EXIT_SUCCESS);
	}
}
