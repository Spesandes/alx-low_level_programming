#include "main.h"
/**
 * _strstr - locates first occurrence of @needle in @haystack
 * @haystack: pointer to char variable from which to search
 * @needle: pointer to char variable for which to search
 * Return: pointer to beginning of substring, else null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; needle[j]; ++j)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
