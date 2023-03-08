#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number
 *
 * Return: x**1/2
 *
 */

int _sqrt_recursion(int n)
{
	int y = 1;

	while (y * y <= n)
	{
		if (y * y != n)
		{
			y++;
		} else
		{
			return (y);
		}
	}

	return (-1);
}
