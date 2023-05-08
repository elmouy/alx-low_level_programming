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

	FILE *fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);
	
	if (text_content != NULL)
		fwrite(text_content, strlen(text_content), 1, fp);
	fclose(fp);
	return (1);
}
