#include "main.h"

/** Speak gently, she can hear */
int append_text_to_file(const char *filename, char *text_content)
/** append_text_to_file appends text at the end of a file */
/** filename is a pointer to the name of the file */
/** text_content is the string to add to the end of the file */
{
	int len, w, o = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (w == -1 || o == -1)
		return (-1);
/** If the function fails or filename is NULL -1. If the file */
/** does not exist the user lacks write permissions -1 else 1 */

	close(o);

	return (1);
}
