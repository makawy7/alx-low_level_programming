#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	long first, second, count, tmp;

	first = 1;
	second = 2;
	count = 2;

	printf("%ld\n", second);
	
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
			printf("%ld\n", second);
		}
	}
	return (0);
}
