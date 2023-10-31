#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and writes its content to the standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and write.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise, the actual number of bytes read and written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	read_bytes = read(file_descriptor, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (file_descriptor == -1 || read_bytes == -1 || write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (write_bytes);
}

