#include "main.h"

/**
 * flip_bits - function that counts the bits changing to different numbers
 * @n: the bit intager pointer
 * @m: bit pointer for the second intager
 * Return: number of bits that have changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
