#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits to convert one number to another number.
 * @n: pointer to the first number.
 * @m: pointer to the second number to convert to.
 * Return: Number of bits that was needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
