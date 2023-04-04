#include "lists.h"
/**
 * add_nodeint_end - add nodes to the end A FUNCTION
 * @n: data var
 * @head: point to  pointer
 * Return: added element or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	p = *head;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		p = *head;

		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	return (*head);
}
