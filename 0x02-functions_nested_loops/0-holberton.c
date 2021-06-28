#include "holberton.h"

/**
 * main -  prints Holberton, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;
	char p[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
