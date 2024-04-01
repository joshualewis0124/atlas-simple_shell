#include "main.h"

/**
 * printEnv - prints the environment variables
 * Return: void
 */

void printEnv(void)
{
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}
