#include "search_algos.h"
/**
 * linear_search - implements the searching algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the value or -1 if fail
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[1] == value)
		{
			return (i);
		}
	}
	return (-1);
}
