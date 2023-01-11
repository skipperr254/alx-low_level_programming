#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *str;

	len1 = strlen(s1) + 1;
	len2 = strlen(s2) + 1;
	len = len1 + len2;
	str = (char *)malloc(sizeof(char) * len - 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(str + i) = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(str + i) = s2[j];
		i++;
	}
	return (str);
}
