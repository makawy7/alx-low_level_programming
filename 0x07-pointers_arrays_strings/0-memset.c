#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer
 * @b: character to be set
 * @n: number of bytes
 *
 * Return: the input pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (start);
}
