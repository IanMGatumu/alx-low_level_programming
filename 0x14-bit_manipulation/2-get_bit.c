#include "main.h"
#include <stdio.h>
/**
 * get_bit - Get the value of a bit at an index.
 * @n: pointer to number to evaluate.
 * @index: pointer index starts from 0 of the bit.
 * Return: Value of bit at index or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
