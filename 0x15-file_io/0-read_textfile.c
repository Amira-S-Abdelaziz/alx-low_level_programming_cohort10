#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
*read_textfile - function
*@filename: variable
*@letters: variable
*Return: value
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int fd2;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd2 = read(fd, buf, letters);
	buf[letters] = '\0';
	printf("%s", buf);
	close(fd);
	return (fd2);
}
