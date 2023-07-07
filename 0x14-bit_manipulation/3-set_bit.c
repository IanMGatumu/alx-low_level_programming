#include "main.h"

/**
 * set_bit - function file sets a bit at a given index to 1
 * @n: is the long int value passed
 * @index: is the bit intager
 * Return: 1 when successful and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
