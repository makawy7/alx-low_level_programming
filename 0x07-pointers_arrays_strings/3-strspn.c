#include "main.h"
#include <stddef.h>
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: string to be matched
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match = 0;

	while (*s != '\0')
	{
		match = 0;
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
			{
				count++;
				match = 1;
			}
		}

		if (match == 0)
		{
			break;
		}
		s++;
	}

	return (count);
}
