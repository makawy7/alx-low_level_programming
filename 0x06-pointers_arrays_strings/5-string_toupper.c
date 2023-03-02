#include "main.h"

/**
 * string_toupper - lowercase letters of a string to uppercase.
 *
 * @str: string
 *
 * Return: void
 *
 */

char *string_toupper(char *str)
{
	char *str_start = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 'a' + 'A';
		str++;
	}

	return (str_start);
}
