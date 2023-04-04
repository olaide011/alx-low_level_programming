#include "lists.h"
/**
 * free_listint2 - function to free2
 * @head: point to pointer
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *clrr;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		clrr = (*head)->next;

		free(*head);
		*head = clrr;
	}
	head = NULL;
}
