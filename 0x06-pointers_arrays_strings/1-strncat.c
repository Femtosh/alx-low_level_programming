#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings but add inputed numbers
 * @src: string to be completed at the end of dest
 * @n: integer parameter to compare index
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
