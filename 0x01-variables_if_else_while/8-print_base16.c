#include <stdio.h>
/**
 * main - Prints all the base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;
	char hexa;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);
	putchar('\n');
	return (0);
}
