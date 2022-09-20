#include <stdio.h>
#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: String decleard
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
