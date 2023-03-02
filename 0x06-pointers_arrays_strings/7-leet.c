#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 *
 * @str: string
 *
 * Return: encoded character
 *
 */

char *leet(char *str)
{
	char *code = "4433007711";
	char *letter = "aAeEoOtTlL";
	int i, j;
	char *start = str;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(letter + j) != '\0'; j++)
		{
			if (*(str + i) == *(letter + j))
			{
				*(str + i) = *(code + j);
				break;
			}
		}
	}

	return (start);
}
