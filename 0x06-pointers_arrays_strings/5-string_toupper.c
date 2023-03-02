#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @j: The string will be modified
 *
 * Return: char var
 */
char *string_toupper(char *j)
{
	int i = 0;

	while (j[i] != '\0')
	{
		if (j[i] >= 'a' && j[i] <= 'Z')
		{
			j[i] -= 32;
			i++;
		}
	}
	j[i] = '\0';
	return (j);

}
