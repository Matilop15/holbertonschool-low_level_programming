#include "main.h"
/**
 *append_text_to_file - paste text in the finaly of file
 *@filename: name of file
 *@text_content: text to paste
 *Return: -1 error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cont;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	cont = write(fd, text_content, strlen(text_content));
	if (!cont)
		return (-1);
	close(fd);
	return (1);
}
