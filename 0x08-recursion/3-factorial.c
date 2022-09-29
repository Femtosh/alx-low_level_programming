#include "main.h"

/**
 * factorial - function finds factorial
 * @n: number to find its factorial
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
