#include "main.h"

/**
 * get_endianness - function checks if the machine is small or big endianness.
 *
 * Returns: 1 for small and 0 for big endianness.
 * no values passed.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *cha = (char *) &i;

	return (*cha);
}
