#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copies string
 * @str: string to copy
 * Return: NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	int i, len;
	char *cr;

	if (str == NULL)
		return (NULL);

	cr = (char *)malloc(sizeof(str));
	if (cr == NULL)
		return (NULL);

	len = strlen(str);

	for (i = 0; i < len; i++)
		*(cr + i) = str[i];
	return (cr);
}
