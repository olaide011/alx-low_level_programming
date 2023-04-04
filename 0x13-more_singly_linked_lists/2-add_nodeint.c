#include "lists.h"
/**
 * add_nodeint - function to add node to the begining of a linked list
 * @n: data to add
 * @head: pointer to pointer
 * Return: new element // otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
