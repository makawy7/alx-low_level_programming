#include "main.h"

/**
 * _strcpy - copies the string
 *
 * @dest: output string
 * @src: input string
 *
 * Return: the coped string
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_start;
}
