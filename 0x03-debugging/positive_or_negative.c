#include "main.h"
/**
 * used to test the functions
 * return 0 if success
 */
void positive_or_negative(int i)
{
	if (i > 0)
	printf("%d is positive\n", i);

	else if (i < 0)
	printf("%d is negative\n", i);

	else
	printf("%d is zero\n", i);
}
