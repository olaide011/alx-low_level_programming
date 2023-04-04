#include "lists.h"
/**
 * insert_nodeint_at_index - ......
 * @head: .....
 * @idx: ....
 * @n: ....
 *
 * Return: ....
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i, *c = *head;

	unsigned int nod;

	i = (listint_t *)malloc(sizeof(listint_t));

	if (i == NULL)
	{
		return (NULL);
	}

	i->n = n;

	if (idx == 0)
	{
		i->next = c;
		*head = i;
		return (i);
	}
	for (nod = 0; nod < (idx - 1); nod++)
	{
		if (c == NULL || c->next == NULL)
		{
			return (NULL);
		}
		c = c->next;
	}

	i->next = c->next;
	c->next = i;
	return (i);
}
