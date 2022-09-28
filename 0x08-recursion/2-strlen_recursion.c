#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string
 * @s: string to check
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		sum++;
		sum + *_strlen_recursion(s + 1);
	}
	return (sum);
}
