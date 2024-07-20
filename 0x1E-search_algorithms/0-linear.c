#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - implements the searching algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the value or -1 if fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
