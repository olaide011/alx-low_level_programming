#include <stdio.h>

/**
 * main - printing 0-9
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;

	}
	putchar('\n');
	return (0);
}
