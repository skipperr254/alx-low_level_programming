#include "main.h"

/**
 * *_strcpy - copies one string to the other
 * @dest: string to be copied to
 * @src: string to copy from
 * Return: destination array
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;
	
	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; len++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
