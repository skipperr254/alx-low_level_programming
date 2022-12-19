#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string yo be reversed
 */

void print_rev(char *s)
{
	int length = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (j = length; j >= 0; j--)
	{
		printf("%c", s[i]);
	}
}
