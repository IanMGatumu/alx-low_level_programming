#include <unistd.h>

/**
 * _putchar - Function writes the character c to stdout.
 * @c: pointer to the character to print.
 * Return: On success 1 and -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
