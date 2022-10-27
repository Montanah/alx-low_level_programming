#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
