#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, t, m;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		t = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (m = 0; m < 10; m++)
		{
			if (m < t)
				printf("%02x", *(b + a + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < t; m++)
		{
			int c = *(b + a + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}

