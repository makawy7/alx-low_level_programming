#include "main.h"

/**
 * puts_half - prints half of a string,
 *
 * @str: intput string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int current = 0;
	char *start = str;
	int half_point;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	while (*start != '\0')
	{
		if (len % 2 == 0)
		{
			half_point = len / 2;
		} else
		{
			half_point = (len - 1) / 2;
		}

		if (current >= half_point)
		{
			_putchar(*start);
		}
		start++;
		current++;
	}
	_putchar('\n');
}
