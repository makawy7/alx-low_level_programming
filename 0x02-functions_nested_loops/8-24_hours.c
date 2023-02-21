#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 *
 */

void jack_bauer(void)
{
	int i, j, k, m;

	for (m = 0; m < 3; m++)
	{
	for (k = 0; k < 4; k++)
	{
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(m + '0');
			_putchar(k + '0');
			_putchar(':');
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
	}
	}
}
