#include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: takes the first integer
 * @b: takes the second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
