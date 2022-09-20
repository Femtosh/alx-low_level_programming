#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints strings in reverse
 * @s: string to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
