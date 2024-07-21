#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array using the binary
 * search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located
 * -1 if the value is not found or array is NULL
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left_arr = 0;
	size_t right_arr = size - 1;
	size_t middle;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left_arr <= right_arr)
	{
		printf("Searching in array: ");
		for (i = left_arr; i <= right_arr; i++)
		{
			if (i != left_arr)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		middle = (left_arr + right_arr) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left_arr = middle + 1;
		else
			right_arr = middle - 1;
	}
	return (-1);
}
