#include "main.h"
#include <unistd.h>
/**
 * _putchar file writes the character a to stdout
 * Return: On success 1 and on error return -1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
