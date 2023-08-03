#include "main.h"

/**
 * clear_bit - Function resets the value of a given bit to 0
 * @n: pointer to the number that changes
 * @index: value passed of the bit
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
