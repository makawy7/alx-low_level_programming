#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 *
 * @n: input number
 *
 * Return: n % 10
 *
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -1 * n;
	}

	last = n % 10;

	_putchar('0' + last);
	return (last);
}
