#include "main.h"

/*
 * create_file: creates a new file for processing
 * @filename: is a pointer to the name of the file being created
 * @text_content: is a pointer to write to the file that is created
 *
 * Return: 1 if the file exists and -1 if the file does not exist, is null
 * or if you do not have the required permissions to write the file
 */
int create_file(const char *filename, char *text_content)
/** create_file: creates a new file */
/** filename is a pointer to the name of the file being created */
/** text_content is a pointer to write to the file that is created */
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
/** Return 1 if the file exists and -1 if the file does not exist, is null */
/** or if you do not have the required permissions to write the file */

	close(fd);

	return (1);
}
