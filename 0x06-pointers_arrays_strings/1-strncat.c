#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: the one the src gonna be appended to.
 * @src: going to be appended to dest
 * @n: maximum bytes from src that will be appended to dest
 *
 * Return: the concatenated string pointer
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n != 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';
	return (dest_start);

}
