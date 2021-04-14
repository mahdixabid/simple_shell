#include "shell.h"
void my_signal(int sig)
{
	flag = 1;
}

int main(void)
{
	signal(SIGINT, my_signal);
	while (1)
		if (flag)
		{
			flag = 0;
		}
	return (0);
}
