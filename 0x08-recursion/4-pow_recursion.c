#include "main.h"

/**
 * _pow_recursion - function finds the power of a number
 * @x: main number
 * @y: power of number x
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
