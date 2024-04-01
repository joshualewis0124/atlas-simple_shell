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

/**
 * exec - executes the input received
 * @args: arguments
 * @input: input
 * Return: void
 */

void exec(char **args, char *input)
{

	int status;
	pid_t childPid = 0;

	if (access(args[0], X_OK) != 0)
		_error(args);

	childPid = fork();

	if (childPid == -1)
	{
		perror("fork\n");
		free(input);
		free(args[0]);
		exit(EXIT_FAILURE);
	}
