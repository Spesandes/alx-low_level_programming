#include <stdio.h>
/**
 * main - Prints all base 10 digits starting from 0
 * using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers % 10 + '0');
	putchar('\n');
	return (0);
}
