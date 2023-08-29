#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *m = needle;

		while (*a == *m && *m != '\0')
		{
			a++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}

