#include "main.h"
#include <string.h>

/**
 *_strlen - returns length of a string
 *@s: string whose length is determined
 *Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
}
