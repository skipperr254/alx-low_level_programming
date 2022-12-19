#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
