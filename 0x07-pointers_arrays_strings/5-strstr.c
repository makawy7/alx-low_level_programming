#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: input string to be searched
 * @needle: string to be found
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *start = NULL;
	int i, j, match = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			match = 1;
			start = haystack + i;
		}

		if (match)
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(start + j) || *(start + j) == '\0')
				{
					match = 0;
					start = NULL;
					break;
				}
			}
		}
		if (match)
		{
			return (start);
		}
	}

	return (NULL);
}
