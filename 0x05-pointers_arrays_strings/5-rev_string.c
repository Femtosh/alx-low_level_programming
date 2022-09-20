#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: String to reverse
 * return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(len);
}
