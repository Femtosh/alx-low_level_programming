#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy from a memory area
 * @dest: memory area to be copied
 * @src: where it is copied from
 * @n: number of bytes copied
 *
 * Return: pointer to be copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
