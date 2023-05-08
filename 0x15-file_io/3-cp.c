#include "main.h"

void f_close(int f);
void f_write(char *f_to);
void f_cant_read(char *f_frm);

/**
 * main - afunction to cp one file into another
 * @argc: the number of args we will be passed
 * @argv: an array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int f1, f2;
	ssize_t r, w;
	char *b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		f_read(argv[1]);

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		f_read(argv[1]);

	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
		f_write(argv[2]);

	r = read(f1, b, 1024);
	if (r == -1)
		f_read(argv[1]);
	w = write(f2, b, r);
	if (w == -1)
		f_write(argv[2]);

	while (r == 1024)
	{
		r = read(f1, b, 1024);
		if (r == -1)
			f_read(argv[1]);

		w = write(f2, b, r);
		if (w == -1)
			f_write(argv[2]);
	}

	if (close(f1) < 0)
		f_close(f1);
	if (close(f2) < 0)
		f_close(f2);

	return (0);
}
/**
 * f_read - a function to print an error and exit
 * @f_frm: a pointer to our originalfile
 */
void f_read(char *f_frm)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_frm);
	exit(98);
}
/**
 * f_write - a function to print an error message and exit
 * @f_to: a pointer to our receiving file
 */
void f_write(char *f_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
	exit(99);
}

/**
 * f_close - a function to print out an error and exit
 * @f: our file descriptor
 */
void f_close(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}
