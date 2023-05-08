#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it .
 * write it to the POSIX stadout.
 * @filename: a pointer.
 * @letters: the number of letters requested.
 * Return: the number of letters actually read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, r, w;
	unsigned int num = letters + 1;
	char *buf;

	if (buf == NULL)
		return (0);
	if (filename == NULL || letters == 0)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == 0)
	{
		return (0);
	}

	r = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (r < 1 || w < 1)
	{
		return (0);
	}
	close(fp);
	free(buf);
	return (w);
}
