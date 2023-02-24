#include "main.h"

/**
 * print_square - print_square
 *
 * @size : is the size of the square
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
