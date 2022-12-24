#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
*read_textfile - function
*@filename: variable
*@letters: variable
*Return: value
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd,wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(fd);
	return (wr);
}
