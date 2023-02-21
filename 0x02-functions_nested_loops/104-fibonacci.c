#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	unsigned long long first, second, count, tmp;

	first = 1;
	second = 2;
	count = 2;

	printf("%llu, ", first);
	printf("%llu, ", second);

	while (count <= 97)
	{
		tmp = second;
		second += first;
		first = tmp;
		if (count == 97)
		{
			printf("%llu", second);
		} else
		{
			printf("%llu, ", second);
		}
		count++;
	}
	putchar('\n');
	return (0);
}
