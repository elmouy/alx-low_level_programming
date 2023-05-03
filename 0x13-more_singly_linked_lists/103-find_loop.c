#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer
* Return: the address of node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head;
	listint_t *k = head;

	if (!head)
		return (NULL);

	while (p && k && k->next)
	{
		k = k->next->next;
		p = p->next;
		if (k == p)
		{
			p = head;
			while (p != k)
			{
				p = p->next;
				k = k->next;
			}
			return (k);
		}
	}
	return (NULL);
}
