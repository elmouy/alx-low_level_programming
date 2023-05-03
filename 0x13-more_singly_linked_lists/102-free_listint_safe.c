#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: pointer
* Return: the size of the list free'd
*/
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int i;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
