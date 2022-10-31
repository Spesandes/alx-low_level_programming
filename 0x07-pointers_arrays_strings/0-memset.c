#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char i.e the address of memory to print
 * @b: constant byte to fill memory area pointed to by s
 * @n: size of the memory to print
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
