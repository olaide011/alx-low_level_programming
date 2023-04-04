#include "lists.h"
/**
 * sum_listint - .....
 * @head: .....
 *
 * Return: ....
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
