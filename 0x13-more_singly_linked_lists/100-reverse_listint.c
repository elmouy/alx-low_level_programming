#include "lists.h"

/**
* *reverse_listint -  reverses a listint_t linked list
* @head: pointer
* Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *re = NULL;
	listint_t *ne = NULL;

	while (*head)
	{
		ne = (*head)->next;
		(*head)->next = re;
		re = *head;
		*head = ne;

	}

	*head = re;
	return (*head);
}
