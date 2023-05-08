#include "main.h"
#include <stdlib.h>

/**
 * Tread lightly, she is near
 * Return: a is the actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *weid;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	weid = malloc(sizeof(char) * letters);
	c = read(fd, weid, letters);
	a = write(STDOUT_FILENO, weid, c);

	free(weid);
	close(b);
	return (a);
}

