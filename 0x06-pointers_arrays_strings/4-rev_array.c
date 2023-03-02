#include "main.h"

/**
 * reverse_array - function reverses array of integers.
 *
 * @a: array
 * @n: number of elements
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int *start_a = a;
	int *end_a = a + n - 1;
	int tmp;

	while (start_a < end_a)
	{
		tmp = *start_a;
		*start_a = *end_a;
		*end_a = tmp;

		start_a++;
		end_a--;
	}
}
