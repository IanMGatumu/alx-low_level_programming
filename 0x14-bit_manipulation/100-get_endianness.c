#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Returns 0 for big and returns 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *cha = (char *) &a;

	return (*cha);
}
