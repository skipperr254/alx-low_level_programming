#include "main.h"

/**
 * _memcpy - copies one mem contents to another
 * @dest: mem where to copy
 * @src: mem from where to copy
 * @n: contents of src up to where to copy
 * Return: address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
