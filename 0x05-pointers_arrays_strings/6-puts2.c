#include "main.h"
/**
 * puts - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input
 * return 0 ailways
 */
void puts2(char *str)
{
	int length = 0;

	int a = 0;

	char *n = str;

	int b = 0;

	while (*n != '\0')
	{
		n++;
		length++;
	}

	a = length - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}

	_putchar('\n');
}
