#include "main.h"
#include <unistd.h>

/**
 * _putchar - file that writes the character c to stdout.
 * @c: is the character that we pass.
 *
 * Return: On success 1 and on error return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
