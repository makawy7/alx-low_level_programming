#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size : is the size of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
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
