#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int used to find the last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
