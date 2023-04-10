#include "main.h"

/**
 * append_text_to_file - function to append text
 * @filename: .....
 * @text_content: ....
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdd, l, err;

	fdd = 0;
	l = 0;
	err = 0;

	if (!filename)
	{
		return (-1);
	}
	else if (!text_content || !text_content[0])
	{
		return (1);
	}
	fdd = open(filename, O_WRONLY | O_APPEND);
	if (fdd < 0)
	{
		return (-1);
	}
	while (text_content[l])
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
