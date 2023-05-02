#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position
* @head: pointer
* @idx: index
* @n: integer
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while ((tmp != NULL) && (i < idx))
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			i++;
			return (node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
