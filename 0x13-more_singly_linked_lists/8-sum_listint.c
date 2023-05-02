#include "lists.h"
/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: pointer
* Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == null)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
