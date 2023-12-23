#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - creating the parent process and the zombie
 * Return: 0
 *
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - the main entry point
 * Return: 0
 *
 */
int main(void)
{
	int a, pid;

	for (a = 0; a < 5; a++)
	{
		pid = fork();

		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}
	infinite_while();
	return (0);
}
