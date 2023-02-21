#include "main"
#include <stdio.h>
/**
 * _putchar - writes the character c to the standard-output
 * c: character to print
 *
 * Return: on sucess 1
 * on error, - 1 will be returned and error
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
