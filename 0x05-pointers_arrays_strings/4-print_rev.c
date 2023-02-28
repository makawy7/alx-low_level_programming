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
	while (s != end)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
