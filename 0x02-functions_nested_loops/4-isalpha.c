#include "main.h"

/**
 * _isalpha - checks for lowercase character or uppercase
 *
 * @c : input character
 *
 * Return: 1 if upper/lower, 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >=  'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
