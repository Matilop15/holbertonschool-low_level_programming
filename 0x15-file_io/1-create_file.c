#include "main.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, larg = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[larg])
		larg++;

	if (text_content)
		write(fd, text_content, larg);

	close(fd);
	return (1);
}
