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

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

