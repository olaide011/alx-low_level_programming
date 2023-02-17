#include <stdio.h>

/**
 * main - printing single digits
 *
 * Return: 0
 */
int main(void)
{
	int s_d = '0';

	while (s_d <= '9')
	{
		putchar(s_d);
		if (s_d < '9')
		{
			putchar(',');
			putchar(' ');
		}
		s_d++;
	}
	putchar('\n');
	return (0);
}
