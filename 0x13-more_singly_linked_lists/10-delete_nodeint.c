#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a list
* @head: pointer
* @index: index of node
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node_d = *head;
	unsigned int i;

	if (node_d == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node_d);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (node_d->next == NULL)
			return (-1);
		node_d = node_d->next;

	}
	tmp = node_d->next;
	node_d->next = tmp->next;
	free(tmp);
	return (1);
}
