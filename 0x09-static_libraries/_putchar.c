#include <unistd.h>

/**
 * _putchar - prints c to std output
 * @c: char to print
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
