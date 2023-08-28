#include "main.h"
/**
 * memset -  fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value 
 * @n: the number of bytes to be changed
 * Return: array with new values for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for(; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}
