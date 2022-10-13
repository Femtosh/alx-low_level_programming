#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - finds and integer
 * array: array of intergers
 * @size: size of the array
 * @cmp: the pointer
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = 1;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}		
