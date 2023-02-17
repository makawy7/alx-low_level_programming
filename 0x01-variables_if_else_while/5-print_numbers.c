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
		printf("%d", c);
		c++;
	}

	putchar('\n');
	return (0);
}
