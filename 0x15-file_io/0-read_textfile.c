#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This will read the text file and print to STDOUT
 * @filename: This is the name of the text file being read
 * @letters: This is the number of letters in the text file to be read
 * Return: w- The number of bytes read ad prined. 0 If the function fail
 * or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename,O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd,buf,letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
