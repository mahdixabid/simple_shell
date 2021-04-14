#include "shell.h"
/**
 * _getline - function that used to read a string or a line
 * @string: string to be printed
 * @size: size of string
 * @bytes_read: reader
 * Return: 0
 */
int _getline(char *string, size_t size, ssize_t bytes_read)
{
	int i;

	bytes_read = 0;
	string = (char *)malloc(size);
	if (bytes_read == -1)
	{
		puts("ERROR!");
		free(string);
	}
	else
		for (i = 0; i < 1;)
		{
			printf("$ ");
			bytes_read = getline(&string, &size, stdin);
			puts(string);
		}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
/**
 * _signal - function to handle signal
 * Return: 0
 */
int _signal(void)
{
	signal(SIGINT, SIG_IGN);

	while (1)
	{
		sleep(1);
	}

	return (0);
}

