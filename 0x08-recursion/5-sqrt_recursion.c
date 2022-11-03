#include "main.h"
/**
 * square_root - defines the square function
 * @i: int variable
 * @j: int variable
 * return: square root
 */
int square_root(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);

	return (square_root(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: any given number to determine its square root
 * Return: The natural square root, if the number has no 
 * square, return: -1
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
