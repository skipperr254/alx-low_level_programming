#include <stdio.h>

/**
 * main - prints number os args
 * @argc: number of args
 * @argv: args
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
