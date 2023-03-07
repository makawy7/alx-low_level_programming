#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination pointer
 * @src: src pointer
 * @n: number of bytes
 *
 * Return: the dest pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (start);
}
