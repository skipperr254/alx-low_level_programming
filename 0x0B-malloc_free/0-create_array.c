#include <stdlib.h>
#include "main.h"

/**
 * create_array - returns an array
 * @size: size of the array
 * @c: character to fill witj
 * Return: Null or pointer to arr
 */

char *create_array(unsigned int size, char c)
{
	char *character;
	unsigned int i;

	if (size == 0)
		return (NULL);

	character = malloc(size * sizeof(char));
	if (character == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(character + i) = c;

	return (character);
}
