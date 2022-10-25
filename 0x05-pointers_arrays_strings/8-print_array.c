#include "main.h"
#include <stdio.h>
/**
 * print_array - prints 'n' elements of an array of integers
 * @a: array pointer of int type
 * @n: var of int type
 */
void print_array(int *a, int n)
{
	int arr;

	arr = 0;
	for (n--; n >= 0; n--, arr++)
	{
		printf("%d", a[arr]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
