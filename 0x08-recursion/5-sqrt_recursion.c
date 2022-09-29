#include "main.h"

/**
 * _sqrt_recursion - finds natural squareroot of a number
 * @n: integer to find it sq
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	unsigned root = _sqrt_recursion(n);
	
	if (root * root != n && n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	else
		return (_sqrt_recursion(n));
}
