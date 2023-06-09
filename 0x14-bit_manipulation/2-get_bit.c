#include "main.h"

/**
 * get_bit - returns the value in a decimal number
 * @n: is the long intager value passed
 * @index: is the unsigned intager of the bit
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
