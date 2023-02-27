#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints  elements of an array of integers
 * @n:number of elements of the array to be printed
 * @a: arrays of integers
 *
 * Return:void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
