#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: input string
 * @accept: string to be matched
 *
 * Return: Returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = NULL;
	int i, match = 0;

	while (*s != '\0')
	{
		match = 0;
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
			{
				start = s;
				match = 1;
			}
		}

		if (match)
		{
			break;
		}
		s++;
	}

	return (start);
}
