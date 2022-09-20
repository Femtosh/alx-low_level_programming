#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * str: string to be halfed
 * Returns: Always 0 (Success)
 */
void puts_half(char *str)
{
	int n;
	
	n = (length_of_the_string - 1) / 2;
	while (*(str + n) != '\0')
		putchar(*(str + n));
	n++;
}

