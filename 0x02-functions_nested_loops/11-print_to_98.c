#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98 in order
 *
 * @n: input number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	} else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	putchar('\n');

}
