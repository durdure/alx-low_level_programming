#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_da;
	int number_let;
	int row_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_da == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (number_let = 0; text_content[number_let]; number_let++)
		;

	rwr = write(file_d, text_content, number_let);

	if (row_wr == -1)
		return (-1);

	close(file_d);

	return (1);
}
