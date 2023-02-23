#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10xtimes
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i, j, first, last;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			last = i % 10;
			if (i >= 10)
			{
				first = i / 10;
				_putchar(first + '0');
			}
			_putchar(last + '0');
		}
		_putchar('\n');
	}
}
