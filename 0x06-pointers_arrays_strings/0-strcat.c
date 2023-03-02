#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: the one the src gonna be appended to.
 * @src: going to be appended to dest
 *
 * Return: the concatenated string pointer
 *
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (dest_start);

}
