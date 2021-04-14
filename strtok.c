#include "shell.h"
/**
 * _strtok - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
int _strtok(char *str, const char *token)
{
	char str[] = "";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
