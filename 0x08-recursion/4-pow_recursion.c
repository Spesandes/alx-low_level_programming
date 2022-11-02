#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: The base number
 * @y: The power to raise a base by
 * Return: 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
