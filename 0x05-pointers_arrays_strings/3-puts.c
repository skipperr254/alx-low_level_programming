#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string to stdout followed by new line
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
