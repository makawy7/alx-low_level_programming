#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 *
 * @c : input character
 *
 * Return: 1 if digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	c = c - '0';

	if (c >=  0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
