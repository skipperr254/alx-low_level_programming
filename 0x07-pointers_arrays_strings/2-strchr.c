#include "main.h"

/**
 * _strchr - finds occurrence of chars in string
 * @s: string to crosscheck
 * @c: char to look for in s
 * Return: address of first occurrence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
