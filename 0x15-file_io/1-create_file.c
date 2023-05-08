#include "main.h"

int _strlen(char *str);

/**
 * create_file - a function to create a file and write
 * @filename: the file to be created
 * @text_content: a null byte terminated string
 * to be written into our new file.
 * Return: 1 on success, -1 on failure for any reason.
 */

int create_file(const char *filename, char *text_content)
{
	int f, w, c;
	int l;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == 0)
		return (-1);

	if (text_content != NULL)
		l = _strlen(text_content);
	else
		return (1);

	w = write(f, text_content, l);
	if (w < 0)
		return (-1);

	c = close(f);
	if (c < 0)
		return (-1);
	return (1);
}

/**
 * _strlen - a function to return the length of a string
 * @str: a char pointer
 * Return: s
 */

int _strlen(char *str)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		continue;
	return (s);
}
