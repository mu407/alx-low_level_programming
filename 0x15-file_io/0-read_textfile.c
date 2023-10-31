#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and writes its content
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and write.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise, the actual number of bytes read and written.
 */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rb, wb;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rb = read(fd, buf, letters);
	wb = write(STDOUT_FILENO, buf, rb);

	if (fd == -1 || rb == -1 || wb == -1 || wb != rb)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (wb);
}
