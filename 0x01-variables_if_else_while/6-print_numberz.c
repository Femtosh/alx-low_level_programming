#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void printnumber(int l)
{
	for (l = 0; l < 10; l++)
	{
		putchar("%i", l);
	}
	putchar("\n");
	return (0);
}

