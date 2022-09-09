#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	long li;
	long long lli;
	char c;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id \n", sizeof(li));
	printf("Size of a long long int: %Id \n", sizeof(lli));
	printf("Size of a float: %Id \n", sizeof(f));

	return (0);
}
