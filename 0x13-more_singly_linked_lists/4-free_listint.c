#include "lists.h"
/**
 * free_listint - funcyion to free nodes
 * @head: pointer
 *
 * Return: freed
 */

void free_listint(listint_t *head)
{
	listint_t *clr = head;

	while (clr != NULL)
	{
		clr = clr->next;
		free(head);
		head = clr;
	}
}
