#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
