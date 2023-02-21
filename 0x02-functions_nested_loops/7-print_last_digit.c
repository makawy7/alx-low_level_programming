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
	long number;
	int last;

	number = n;
	last = number % 10;

	if (n < 0)
	{
		last = -(number) % 10;
	}

	_putchar('0' + last);
	return (last);
}
