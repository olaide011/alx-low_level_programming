#include "main.h"

/**
 * create_file - function to create file and fill with data
 * @filename: .....
 * @text_content: .......
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int l, err, fdd;

	l = 0;
	err = 0;
	fdd = 0;

	if (!filename)
	{
		return (-1);
	}

	fdd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fdd < 0)
	{
		return (-1);
	}

	while (text_content && text_content[l])
	{
		l++;
	}

	err = write(fdd, text_content, l);
	if (err < 0)
	{
		return (-1);
	}
	close(fdd);
	return (1);
}
