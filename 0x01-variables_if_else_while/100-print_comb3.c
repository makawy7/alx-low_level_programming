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

	for (c = 0; c < 10; c++)
	{
		for (g = c + 1; g < 10; g++)
		{
			putchar(c + '0');
			putchar(g + '0');
			if (c < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
