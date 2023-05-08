#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int  w, u, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_content[i])
			i++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	w = write(u, text_content, i);

	if (u == -1 || w == -1)
		return (-1);

	close(u);

	return (1);
}
