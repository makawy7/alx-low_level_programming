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
	
	printf("%ld, ", first);
	printf("%ld, ", second);

	while (count <= 50)
	{	
		tmp = second;
		second += first;
		first = tmp;
		if (count == 50)
		{
			printf("%ld", second);
		} else
		{
			printf("%ld, ", second);
		}
		count++;
	}
	return (0);
}
