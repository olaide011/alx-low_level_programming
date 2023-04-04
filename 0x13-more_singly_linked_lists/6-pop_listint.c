#include "lists.h"
/**
 * pop_listint - deletes first node
 * @head: point to pointer
 *
 * Return: 0 if NULL or data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *del;

	int hold;

	if (*head == NULL)
	{
		return (0);
	}


		del = *head;
		hold  = (*head)->n;
		*head = (*head)->next;

		free(del);

	return (hold);
}
