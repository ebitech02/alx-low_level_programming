#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array
 * @n: the number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int d;
	int b;

	for (d = 0; d < n--; d++)
	{
		b = a[d];
		a[d] = a[n];
		a[n] = b;
	}

}
