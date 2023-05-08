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
	int f, r, w;
	unsigned int num = letters + 1;
	char *b = malloc(num * sizeof(char));

	if (b == NULL)
		return (0);
	if (filename == NULL || letters == 0)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == 0)
	{
		return (0);
	}

	r = read(f, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (r < 1 || w < 1)
	{
		free(b);
		return (0);
	}
	close(f);
	free(b);
	return (w);
}
