#include <stdio.h>

/**
 * main - prints all single digit numbers starting from 0 to 10
 * followed by a new line, using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
