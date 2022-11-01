#include <stdio.h>
/**
 * print_diagsums - print sum of the two diagonals of a square
 * matrix of integers
 * @a: pointer to int
 * @size: size of pointer to int
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumX = 0;
	int sumY = 0;

	for (i = 0; i < size; ++i)
		sumX += (a + i * size)[i];
	for (j = 0; j < size; ++j)
		sumY += (a + j * size)[--i];
	printf("%d, %d\n", sumX, sumY);
}
