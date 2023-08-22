#include "main.h"
/**
 * _strcpy - a function that copies the string
 * pointed to by src
 * @dest: pointer to copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;

	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';
	return (dest);
}
