#include "main.h"

/**
 * print_sign - checks for lowercase character or uppercase
 *
 * @n : input number
 *
 * Return: + if positive number, - if negative number,  0 otherwise
 *
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}

	if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);

}
