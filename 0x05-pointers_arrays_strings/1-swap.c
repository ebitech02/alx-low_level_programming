#include "main.h"
/**
 *swap_int - a function that swaps the values of two integers
 *@a: integer to swap
 *@b: integer to swap
 * return 0 always
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
