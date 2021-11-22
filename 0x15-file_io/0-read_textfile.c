#include "main.h"
/**
 *read_textfile - read a file la cantidad de characteres indicado por letters
 *@filename: name of file to read
 *@letters: cantidad de caracteres a leer
 *Return: is 0 if no exist file, else is the text.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	close(fd);
	free(buff);
	return (readed);
}
