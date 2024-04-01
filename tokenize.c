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


