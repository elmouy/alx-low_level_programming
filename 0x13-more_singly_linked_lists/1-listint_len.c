#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: pointer
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	k = h;
	while (k != NULL)
	{
		i++;
		k = h->next;
	}
	return (i);
