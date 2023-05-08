#include "main.h"

/**
 * Speak gently, she can hear
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0;
	int b = 0;
	int lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		lenth++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, lenth);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

