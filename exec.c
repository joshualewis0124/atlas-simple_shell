#include "main.h"
/**
 * _error - checks and handles errors
 * @args: arguments to check
 * Return: void
 */

void _error(char *args[])
{
	fprintf(stderr, "%s: command not found\n", args[0]);
	perror("");
	free(args[0]);
	exit(98);
}
