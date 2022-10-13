#include  <stdio.h>

/**
 * print_name - function prints name
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
