#include "shell.h"
int _getline()
{
	char *string;
	size_t size;
	ssize_t bytes_read = 0;
	int i;
	string = (char *) malloc (size);
	if (bytes_read == -1)
		{
			puts ("hsh");
		}
	else
		for (i = 0; i < 1; i++)
			{
				printf ("$ " );
				bytes_read = getline (&string, &size, stdin);
			}
	return (0);
}
int _strtok()
{
	char *str = " ";
	char *token = strtok(str, " ");
	while (token != NULL)
		{
			printf("%s", token);
			token = strtok(NULL, " ");
		}
	return (0);
}
void _fork()
{    
	char *argv[] = {"/bin/ls", "-l", ".", NULL};
	pid_t pid = fork();
	if (pid == 0)
	{
		execve(argv[0], argv, NULL);	
	}
	else
	{
		wait (NULL);
	}
}
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}
int main(void)
{
	int st = 1;
	signal(SIGINT, sig_handler);
	while(st)
		{
		_getline();
		_strtok();
		_fork();
		}     
	return (0);
}
