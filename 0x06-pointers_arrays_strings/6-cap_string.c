#include "main.h"

/**
 * cap_string - capitlize string
 *
 * @str: string
 *
 * Return: void
 *
 */

char *cap_string(char *str)
{
	char *str_start = str;
	int start = 0;

	while (*str != '\0')
	{
		if (start)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 'a' + 'A';
			}
		}
		if (*str == ' ' || *str == '\n' || *str == '\t')
		{
			start = 1;
		} else
		{
			start = 0;
		}
		str++;
	}

	return (str_start);
}
