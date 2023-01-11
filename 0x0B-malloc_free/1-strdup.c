#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string
 * @str: string to copy
 * Return: NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *cr;

	if (str == NULL)
		return (NULL);

	cr = (char *)malloc(aizeof(str));
	if (cr == NULL)
		return (NULL);

	int len = sizeof(str) / sizeof(char);

	for (i = 0; i < len; i++)
		*(cr + i) = str[i];
	return (cr);
}
