#include "main.h"
#include <stdio.h>

/**
 * print_array - prints half of a string,
 *
 * @a: intput array
 * @n: elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d,", *a);
		a++;
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
}
