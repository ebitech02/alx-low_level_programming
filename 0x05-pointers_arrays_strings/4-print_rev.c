#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * return 0 always
 */
void print_rev(char *s)
{
	int a = 0;

	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	s--;

	for (b = a; b >= 0; b--)
	{
	_putchar(*s);
	s--;
	}

	_putchar('\n');
}
