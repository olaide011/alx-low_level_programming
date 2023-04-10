#include "main.h"

/**
 * read_textfile - functon to read a text file and print out the POSIX std
 * @filename: text to print
 * @letters: maximun char to print
 *
 * Return: numbers of char printed
 */

ssize_t read_textfile(const char *filename, size_t  letters)
{
	int rdd, fd, err;
	char *p;

	rdd = 0;
	fd = 0;
	err = 0;
	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	p = malloc(sizeof(char) * letters + 1);
	if (!p)
	{
		return (0);
	}
	rdd = read(fd, p, letters);
	if (rdd < 0)
	{
		free(p);
		return (0);
	}
	p[letters] = '\0';
	err = write(STDOUT_FILENO, p, rdd);
	if (err <= 0)
	{
		free(p);
		return (0);
	}
	free(p);
	close(fd);
	return (rdd);
}

