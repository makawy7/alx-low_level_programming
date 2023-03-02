#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that works exactly like strcmp
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference integer
 *
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (1)
	{
		diff += *s1 - *s2;
		if (*s1 != '\0' || *s2 != '\0')
			break;
		s1++;
		s2++;
	}

	return (diff);
}
