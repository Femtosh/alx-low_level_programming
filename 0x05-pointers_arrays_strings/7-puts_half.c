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
	int n = 0;
	int length_of_the_string = strlen(str);
	
	while (*(str + n) != '\0')
	{
	for (length_of_the_string % 2 == 0);
		n = length_of_the_string / 2;
		{
			putchar(*(str + n));
			n++;
		}
	 	n = ((length_of_the_string - 1) / 2);
		{
			putchar(*(str + n));
			n++;
			}
	}
}
