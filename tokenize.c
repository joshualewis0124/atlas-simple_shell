#include "main.h"

/**
 * tokenize - function that splits a string into tokens
 * @input: user input
 * @args: arguments
 * Return: void
 */

void tokenize(char *input, char *args[])
{
	char *token;
	unsigned int i = 0;

	token = strtok(input, " ");

	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;

	if (args[0] == NULL)
		exit(0);

	if (strcmp(input, "env") == 0)
	{
		printEnv();
		return;
	}
