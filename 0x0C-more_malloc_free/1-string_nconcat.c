#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	if (n < str2)
		s = malloc(sizeof(char) * (str1 + n + 1));
	else
		s = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!s)
		return (NULL);

	while (i < str1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < str2 && i < (str1 + n))
		s[i++] = s2[j++];

	while (n >= str2 && i < (str1 + str2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
