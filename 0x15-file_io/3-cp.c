#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
/** create_buffer allocates 1024 bytes for a buffer */
void close_file(int fd);

/** Write a program that copies the content */
/** of a file to another file */
char *create_buffer(char *file)
/** file is the name of the file buffer is storing chars for */

{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
/** Returns a pointer to the new buffer */
}

void close_file(int fd)
/** close_file closes the file descriptors */
/** fd is the file descriptor to be closed */
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
/** main copies the contents of a file to another file */
/** argc are the number of arguments supplied to the program */
/** argv is an array of pointers to the arguments */
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
/** If the argument count is incorrect - exit code 97 */
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
/** If file_from does not exist or cannot be read 98 */
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
/** If file_to cannot be created or written to - exit code 99 */
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
