#include "main.h"

/**
 * _isupper - checks for uppercase  character
 *
 * @c : input character
 *
 * Return: 1 if upper, 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >=  'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
