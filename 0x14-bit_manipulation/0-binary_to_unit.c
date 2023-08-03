#include "main.h"

/**
 * binary_to_uint - Function converts a binary number into unsigned int n
 * @b: constant ti the pointer for the character
 *
 * Return: value of the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		value = 2 * value + (b[n] - '0');
	}

	return (value);
}
