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
	int length_of_the_string = strlen(str);

	n = length_of_the_string / 2;
	while (*(str + n) != '\0')
	{
	if (length_of_the_string % 2 == 0)
	{
			putchar(*(str + n));
			n++;
		}
	else {
		putchar (*(str + (n - 1)));
		n++;
	}
}
