#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 *
 */

void main(void)
{
	int i;
	int res;

	res = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res = res + i;
	}
	printf("%d\n", res);
}
