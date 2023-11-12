#include "shell.h"

/**
 * main - main function
 * @arc: len argument
 * @arv: arv argument by user
 * Return: 0
 */
int main(int arc, char **arv)
{
	bool interactive = (arc == 1 && isatty(STDIN_FILENO));

	shell(arv, interactive);
	return (0);
}
