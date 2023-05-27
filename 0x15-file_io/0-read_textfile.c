#include "main.h"

/**
 * r_text_file - reads a file and prints the letters
 * @file_N: file name.
 * @letter: numbers of letter printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t r_text_file(const char *file_, size_t letter)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!file_N)
		return (0);

	fd = open(file_N, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letter));
	if (!buff)
		return (0);

	nrd = read(fd, buf, letter);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buff);

	return (nwr);
}
