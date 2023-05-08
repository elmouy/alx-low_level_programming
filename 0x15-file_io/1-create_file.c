#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		int i = 0;

		while (text_content[i])
			i++;
		int r = write(f, text_content, i);

		if (r == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
