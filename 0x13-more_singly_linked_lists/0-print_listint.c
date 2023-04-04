#include "lists.h"

/**
 * print_listint- function to print the element
 *
 * @h: pointer representing head
 *
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
