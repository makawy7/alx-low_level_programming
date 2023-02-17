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
	int g;
	int d;

	for (c = 0; c < 10; c++)
	{
		for (g = c + 1; g < 10; g++)
		{
			for (d = g + 1; d < 10; d++)
			{
				putchar(c + '0');
				putchar(g + '0');
				putchar(d + '0');

				if (c < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
