#include "main.h"

/**
 * read_textfile - reads a txtfile and prints it in stdout
 * @filename: name of array
 * @letters: number of bytes of array
 *
 * Return: number of leters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t readed;
	ssize_t pwrite;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readed = read(fd, buf, letters);
	if (readed == -1)
		return (0);
	pwrite = write(STDOUT_FILENO, buf, readed);
	if (pwrite == -1)
		return (0);
	free(buf);
	close(fd);
	return (pwrite);
}
