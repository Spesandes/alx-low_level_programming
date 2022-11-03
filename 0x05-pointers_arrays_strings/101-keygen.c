#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - create valid password each time
 *
 * Return: Always 0 (Success)
 */
#define NUM 2772
#define SIZE 85

int main(void)
{
	char passwd[85], c;
	int i = 0, sum = 0, sub;

	srand(time(NULL));
LOOP:
	while (sum < NUM - 126)
	{
		c = rand() % ('~' - '!') + '!';
		if (c == '`' || c == '"' || c == '$' || c == '\\')
			continue;
		passwd[i++] = c;
		sum += c;
	}
	sub = NUM - sum;
	if (sub < '!')
	{
		--i;
		sum -= c;
		goto LOOP;
	}
	else
		passwd[i++] = (char) sub;
	sum += sub;
	passwd[i] = '\0';
	printf("%s", passwd);
	return (0);
}
