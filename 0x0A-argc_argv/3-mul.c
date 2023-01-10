#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of numbers
 * @argc: number of args
 * @argv: args
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int res;

		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
	printf("ERROR\n");
	return (1);
}
