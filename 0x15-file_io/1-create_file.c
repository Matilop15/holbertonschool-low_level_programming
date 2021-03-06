#include "main.h"
/**
 *create_file - crea a file
 *@filename: name of file
 *@text_content: content of file
 *Return: -1 si hay errores.. OR 1 sale todo ok
 */
int create_file(const char *filename, char *text_content)
{
	int fd, content;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	content = write(fd, text_content, strlen(text_content));
	close(fd);

	if (content == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
