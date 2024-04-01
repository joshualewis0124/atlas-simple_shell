#include "main.h"

/**
 * handle_path - Finds and handles the path of the command to execute
 * @input: User input
 * Return: The full path of the command if found, otherwise NULL
 */

char *handle_path(char *input)
	{
	int i = 0;
	char *cache, *token, *result;

	if (strchr(input, '/') != NULL)
		return (strdup(input));
