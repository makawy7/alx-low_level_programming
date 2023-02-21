#include "main.h"
#include <stdlib.h>

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

	n = abs(n);

	last = n % 10;

	_putchar('0' + last);
	return (last);
}
