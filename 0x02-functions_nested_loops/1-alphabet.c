#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 'a');
	}
	_putchar('\n');
}
