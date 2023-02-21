#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	long first, second, sum, tmp;

	first = 1;
	second = 2;
	sum = second;

	while (1)
	{
		tmp = second;
		second += first;
		first = tmp;
		if (second > 4000000)
		{
			break;
		}
		if (second % 2 == 0)
		{
			sum += second;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
