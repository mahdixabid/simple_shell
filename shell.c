#include "shell.h"
/**
 * _getline - read line
 * @string: string to be red
 * @size: size of string
 * @bytes_read: reader
 * Return: 0
 */
int _getline(char *string, size_t size, ssize_t bytes_read)
{
	char *string;
	size_t size;
	ssize_t bytes_read = 0;
	int i;

	string = (char *)malloc(size);
	if (bytes_read == -1)
	{
		puts("hsh");
	}
	else
		for (i = 0; i < 1; i++)
		{
			printf("$ ");
			bytes_read = getline(&string, &size, stdin);
		}
	return (0);
}
/**
 * _strtok - function that parses a string
 * @str: string to be parsed
 * @token: delimeter
 * Return: 0
 */
int _strtok(char *str, const char *token)
{
	char *str[] = "";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
/**
 * _fork - create a child process
 * Return : void
 */
void _fork(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};
	pid_t pid = fork();

	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(NULL);
	}
}
/**
 *main - main function
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 1;)
		{
		_getline();
		_strtok();
		_fork();
		}
	return (0);
}
