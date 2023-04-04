#include "lists.h"
/**
 * listint_len - function to print length of element
 * @h: pointer
 *
 * Return: length of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
