#include "main.h"

/**
 * read_textfile - Reads text file and prints letters.
 * @filename: Filename.
 * @letters: Letters to be read and printed.
 *
 * Return: Actual number of letters read and printed. If fails, Returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, j;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	close(fd);

	free(buf);

	return (j);
}
