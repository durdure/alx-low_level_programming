#include "main.h"

#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letter: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letter)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letter));
	if (!buff)
		return (0);

	nrd = read(fd, buff, letter);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);

	free(buff);

	return (nwr);
}
