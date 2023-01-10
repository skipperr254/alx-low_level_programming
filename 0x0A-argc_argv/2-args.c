#include <stdio.h>

/**
 * main - prints args passed to it
 * @argc: number of args
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
