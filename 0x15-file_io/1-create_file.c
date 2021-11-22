#include "main.h"
/**
 *create_file - crea a file
 *@filename: name of file
 *@text_content: content of file
 *Return: -1 si hay errores.. OR 1 sale todo ok
 */
int create_file(const char *filename, char *text_content)
{
	int fd, larg = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[larg])
		larg++;

	if (text_content)
		write(fd, text_content, larg);

	close(fd);
	return (1);
}
