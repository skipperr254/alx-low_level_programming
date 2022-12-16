#include "main.h"
#include <stdio.h>

/*
 * _isupper - checks whether a character is upper
 * @c - Char to be checked for case
 * Return: 0 when true else false
 */

int _isupper(int c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return (1);
    }
    return (0);
}