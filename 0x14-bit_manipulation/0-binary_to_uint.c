#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        int a;
        unsigned int deci_value = 0;

        if (!b)
                return (0);

        for (a = 0; b[a]; a++)
        {
                if (b[a] < '0' || b[a] > '1')
                        return (0);
                deci_value = 2 * deci_value + (b[a] - '0');
        }

        return (deci_value);
}
