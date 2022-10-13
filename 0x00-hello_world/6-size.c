#include <stdio.h>

/**
 * main - Prints size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a: %d bytes\n", sizeof (a));
	printf("Size of b: %d bytes\n", sizeof(b));
	printf("Size of c: %d bytes\n", sizeof(c));
	printf("Size of d: %d bytes\n", sizeof(d));
	printf("Size of e: %d bytes\n". sizeof(e));
	return (0);
