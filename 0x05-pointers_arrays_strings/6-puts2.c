#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other number
 * @str - strings to input
 * 
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
