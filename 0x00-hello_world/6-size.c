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

	printf("Size of a char: %d byte(s)\n", sizeof(1));
	printf("Size of an int: %d byte(s)\n", sizeof(4));
	printf("Size of a long int: %d byte(s)\n", sizeof(4)); 
	printf("Size of a long long int: %d byte(s)\n", sizeof(8));
	printf("Size of a float: %d byte(s)\n". sizeof(4));
	return (0);
}
