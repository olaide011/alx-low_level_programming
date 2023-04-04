#include "lists.h"
/**
 * delete_nodeint_at_index - function......
 * @head: .....
 * @index: ....
 *
 * Return: 1 || -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *k, *c = *head;

	unsigned int node;

	if (c == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (c->next == NULL)
		{
			return (-1);
		}
		c = c->next;
	}
	k = c->next;
	c->next = k->next;
	free(k);
	return (1);
}
