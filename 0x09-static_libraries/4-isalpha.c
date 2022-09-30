#include "main.h"
/**
 * _isalpha - function checks if argument is alpha
 *
 * @c: is the int that will use fo the argument
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
