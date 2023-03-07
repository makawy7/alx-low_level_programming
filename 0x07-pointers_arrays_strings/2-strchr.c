#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to the string
 * @c: character to be found
 *
 * Return: a pointer to the memory location where character
 * was found
 *
 */

char *_strchr(char *s, char c)
{
	char *start = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			start = s;
			break;
		}
		s++;
	}

	return (start);
}
