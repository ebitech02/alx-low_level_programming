#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if odd, n = n = (length_of_the_string - 1) / 2
 * @str: input
 * return 0 always
 */
void puts_half(char *str)
{
	int a, n, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		length++;
	}

	n = (length / 2);

	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
