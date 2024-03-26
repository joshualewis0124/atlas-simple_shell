#define _GNU_SOURCE

#include "main.h"

/**
 * spacesCheck - check if str contain only space
 * @str: string to check
 * Return: 0 on success or 1 on failure
 */

int spacesCheck(const char *str)
{
	while (*str)
	{
		if (*str != ' ')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - main function for the shell
 * Return: 0 on success
 */

int main(void)
{
	char *input = NULL;
	char *args[64] = { NULL };
	size_t inputSize = 0;
	ssize_t inputRead;

