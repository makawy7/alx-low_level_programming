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
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}

	putchar('\n');
	return (0);
}
