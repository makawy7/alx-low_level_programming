#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: intput string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *end = s;

	while (*s != '\0')
	{
		s++;
	}
	
	s--;

	while (1)
	{
		_putchar(*s);
		if (s == end)
		{
			break;
		}
		s--;
	}
	_putchar('\n');
}
