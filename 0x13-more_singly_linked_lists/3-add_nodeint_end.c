#include "lists.h"

/**
* *add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer
* @n: int
* Return: new list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	tmp = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		return (node);
}
