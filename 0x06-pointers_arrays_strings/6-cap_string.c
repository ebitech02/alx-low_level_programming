#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	int length = 0;

	while (str[length] >= 'a' && str[length] <= 'z')
	{
		length++;

		if (str[length - 1] == ' ' ||
		    str[length - 1] == '\t' ||
		    str[length - 1] == '\n' ||
		    str[length - 1] == ',' ||
		    str[length - 1] == ';' ||
		    str[length - 1] == '.' ||
		    str[length - 1] == '!' ||
		    str[length - 1] == '?' ||
		    str[length - 1] == '"' ||
		    str[length - 1] == '(' ||
		    str[length - 1] == ')' ||
		    str[length - 1] == '{' ||
		    str[length - 1] == '}' ||
		    length == 0)
			str[length] -= 32;

		   length++;
	}
	return (str);
}
