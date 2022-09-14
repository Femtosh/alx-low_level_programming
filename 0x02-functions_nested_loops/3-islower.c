#include "main.h"
/**
 * _islower - checks for lower case
 * @c: is the int the will be used for the argument
 * Return; Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
