#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other char os str
 * @str: string whose every other character is printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i += 2)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
