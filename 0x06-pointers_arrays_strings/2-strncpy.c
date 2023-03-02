#include "main.h"

/**
 * _strncpy - function that works exactly like strncpy
 *
 * @dest: the one the src gonna be copied to.
 * @src: going to be copied to dest by some amount
 * @n: maximum bytes from that will be copied to dest
 *
 * Return: the result string pointer
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int dest_ended = 0;

	while (*src != '\0' && n != 0)
	{
		if (*dest == '\0')
			dest_ended = 1;
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	if (dest_ended)
		*dest = '\0';
	
	return (dest_start);

}
