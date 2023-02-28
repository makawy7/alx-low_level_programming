#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 *
 * @s: intput string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}

	while (end > start)
	{
		end--;
		tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		start++;
	}
}
