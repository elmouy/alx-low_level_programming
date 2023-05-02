#include "lists.h"

/**
* *add_nodeint - adds new node at the beginning of a list
* @head: pointer
* @n: int
* Return: new list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node  = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
		tmp = *head;
		while (tmp->next != null)
		{
			tmp = tmp->next;
			tmp->next = node;
		}
	return (*head);
}
