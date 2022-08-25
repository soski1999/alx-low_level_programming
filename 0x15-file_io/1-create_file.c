#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: a null terminated string to write the file
 *
 * Return: 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	int nletters;
	int fd;
	int wrletters;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	wrletters = write(fd, text_content, nletters);
	if (wrletters == -1)
		return (-1);
	close(fd);
	return (1);
}
