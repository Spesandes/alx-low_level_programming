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

	printf("Size of a: %d byte(s)\n", sizeof(a));
	printf("Size of b: %d byte(s)\n", sizeof(b));
	printf("Size of c: %d byte(s)\n", sizeof(c));
	printf("Size of d: %d byte(s)\n", sizeof(d));
	printf("Size of e: %d byte(s)\n". sizeof(e));
	return (0);
