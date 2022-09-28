#include "main.h"

/**
 * _strchr - checks character in a string
 * @s: strings to check
 * @c: character to check
 *
 * Return: Always null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}

