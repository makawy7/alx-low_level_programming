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
	int src_ended = 0;

	while (n != 0)
	{
		if (*src == '\0')
			src_ended = 1;

		if (src_ended)
		{
			*dest = '\0';
		} else
		{
			*dest = *src;
		}
		src++;
		dest++;
		n--;
	}
	return (dest_start);

}
