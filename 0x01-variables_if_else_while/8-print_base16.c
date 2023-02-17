#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	for (c = 0; c <= 5; c++)
	{
		putchar(c + 'a');
	}

	putchar('\n');
	return (0);
}
