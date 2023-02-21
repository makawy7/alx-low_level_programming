#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, j, res, first, last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (res >= 10)
			{
				first = res / 10;
				last = res % 10;
				_putchar(' ');
				_putchar(first + '0');
				_putchar(last + '0');
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
