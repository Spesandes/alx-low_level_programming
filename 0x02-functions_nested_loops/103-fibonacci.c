#include <stdio.h>
/**
 * main - Prints the sum of even Fibonacci numbers not exceedin
 * not exceeding 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long num1;
	unsigned long num2;
	unsigned long sum;
	float total;

	num1 = 0;
	num2 = 1;
	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total = total + sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}