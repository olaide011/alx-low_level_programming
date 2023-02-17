#include <stdio.h>

/**
 * main - print alphabet - q,e.
 *
 * Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc != 'q' && abc != 'e')
		{
			putchar(abc);

		}
		abc++;
	}
	putchar('\n');
	return (0);
}
