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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
}
