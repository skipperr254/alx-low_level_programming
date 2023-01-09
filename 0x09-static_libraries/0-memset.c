#include "main.h"

/**
 * _memset - prints chars into memory
 * @s: pointer to char
 * @b: data to change
 * @n: index
 * Return: address of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
