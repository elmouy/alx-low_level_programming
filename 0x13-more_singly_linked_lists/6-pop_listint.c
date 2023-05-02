#include "lists.h"

/**
* pop_listint - deletes the head node of a list
* @head: pointer
*
* Return: returns the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!*head)
		return (0);
	node = *head;
	i = node->n;
	*head = (*head)->next;

	free(node);
	return (i);
}:
