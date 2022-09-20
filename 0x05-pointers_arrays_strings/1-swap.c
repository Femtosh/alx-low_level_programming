#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integerss
 * @a: first integer
 * @b: Second integer
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a

	*a = *b;
	*b = tmp;
}
