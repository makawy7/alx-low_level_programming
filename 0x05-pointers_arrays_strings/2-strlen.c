#include "main.h"
#include <stddef.h>

/**
 * _strlen - calculating the length of a string
 *
 * @s: pointer to the first character of a string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
