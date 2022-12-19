#include "main.h"

/**
 * swap_int - swaps two variables values.
 * @a: first variable for swapping
 * @b: second variable for swapping
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
