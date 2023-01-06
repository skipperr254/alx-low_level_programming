#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int first = 0;
	int last = strlen(s) - 1;

	return (_is_palindrome(s, first, last));
}

/**
 * _is_palindrome - helper function
 * @s: string to check
 * @first: index of first character
 * @last: index of last char
 * Return: 0 or 1
 */

int _is_palindrome(char *s, int first, int last)
{
	if (*s == '\0')
		return (1);
	if (first == last)
		return (1);
	if (s[first] != s[last])
		return (0);
	if (first == (strlen(s) - 1) && last == 0)
		return (1);
	first++;
	last--;
	return (_is_palindrome(s, first, last));
}
