#include "main.h"

/**
 * _sqrt_recursion - finds natural squareroot of a number
 * @n: integer to find it sq
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
       if (n == 1 || n == 0)
	 return (n);
       return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a numb
 * @n: test number
 * @x: squared number
 *
 * Return: Always 0 (Success)
 */
int _sqrt(int n, int x)
{
	if (n = x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

