#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
