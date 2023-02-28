#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: intput string
 *
 * Return: void
 */

void puts2(char *str)
{
	int current = 0;

	while (*str != '\0')
	{
		if (current % 2 == 0)
			_putchar(*str);
		str++;
		current++;
	}
	_putchar('\n');
}
