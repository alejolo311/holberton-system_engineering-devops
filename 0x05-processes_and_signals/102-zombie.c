#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * create_zombie - zombie process
 * Return: 0 in some cases jajaja
 */
int create_zombie(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - create zombie
 * Return: 0 in some cases jaja
 */
int main(void)
{
	int i = 0;
	pid_t zombie;

	while (i < 5)
	{
		zombie = fork();
		if (zombie > 0)
		{
			printf("Zombie process created, PID: %i\n", zombie);
		} else
			exit(0);
        i++;
	}
	create_zombie();

	return (0);
}