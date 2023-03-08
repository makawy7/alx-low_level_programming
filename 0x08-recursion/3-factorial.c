#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: input number
 *
 * Return: factorial of a given number
 *
 */

int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	fact = n * factorial(n - 1);

	return (fact);
}
