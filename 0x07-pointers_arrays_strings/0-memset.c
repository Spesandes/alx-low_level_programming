#include "main.h"
/**
 * _memset - fills memory with a constan byte
 * @s: Pointer to type char
 * @b: Constant byte with which to fill memory area
 * pointed to by @s
 * @n: Size of the memory to print
 * Return: pointer to the memory area (s)
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
