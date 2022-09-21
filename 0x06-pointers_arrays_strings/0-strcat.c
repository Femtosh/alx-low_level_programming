#include "main.h"
#include <stdio.h>
/**
 * _stcat - concatenates the string pointed to by src
 * @dest: string that will be appended
 * @src: string to be concatenated
 *
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = sr[index];

	return (dest);
}
