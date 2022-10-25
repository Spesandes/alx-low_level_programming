#include "main.c"
/**
 * swap_int - swaps the value of two integers
 * @a: First integer
 * @b: Second integer
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
