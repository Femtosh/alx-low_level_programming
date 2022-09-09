#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: byte(s)%Id \n", sizeof(li));
	printf("Size of a long long int: byte(s)%Id \n", sizeof(lli));
	printf("Size of a float: byte(s)%Id \n", sizeof(f));

	return (0);
}
