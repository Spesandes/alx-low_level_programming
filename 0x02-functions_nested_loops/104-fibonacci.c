#include <stdio.h>
#define MAX 98
#define TOTAL 100000000000

/**
 * main - Prints the 1st 98 Fibonacci numbers
 * 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int num1x, num2y, nu2x, nu2y, stepa, stepb;

	num1x = num2y = stepa = stepb = 0;
	nu2x = 1;
	nu2y = 2;

	if (num1x)
		printf("%lu%0*lu", num1x, 11, num2y);
	else
		printf("%lu", num2y);

	for (i = 1; i < MAX; i++)
	{
		printf(", ");
		if (nu2x)
			printf("%lu%0*lu", nu2x, 11, nu2y);
		else
			printf("%lu", nu2y);
		stepa = num1x;
		stepb = num2y;
		num1x = nu2x;
		num2y = nu2y;
		nu2x += stepa;
		nu2y += stepb;
		nu2x += nu2y / TOTAL;
		nu2y %= TOTAL;
	}
	printf("\n");
	return (0);
}
