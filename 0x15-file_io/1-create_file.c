#include "main.h"

/**
 * Under the snow
 * A pointer to the name of the file to create
 * pointer to a string to write to the file
 */
int create_file(const char *filename, char *text_content)
{
	int a = 0;
        int b = 0;
       	int lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (lenth = 0; text_content[lenth];)
	lenth++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
	return (-1);

	close(a);

	return (1);
}

