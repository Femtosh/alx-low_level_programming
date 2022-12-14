#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints integers in array
 * @array: array of elements
 * @size: Size of array
 * @action: function pointer
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
