#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to number1
 * @b: pointer to number2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp_a;

	tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}
