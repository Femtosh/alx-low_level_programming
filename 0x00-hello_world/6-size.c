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

	printf("The size of an int is: %Id byte(s)\n", sizeof(i));
	printf("The size of a float: %Id byte(s)\n", sizeof(f));
	printf("The size of a c is: %Id \n", sizeof(c));
	printf("THe size of long is: %Id \n", sizeof(li));
	printf("The size of long long is: %Id \n", sizeof(lli));

	return (0);
}
