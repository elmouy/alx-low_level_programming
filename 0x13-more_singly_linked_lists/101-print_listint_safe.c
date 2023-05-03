#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			int cycle_length = 1;

			slow = slow->next;

			while (slow != fast)
			{
				cycle_length++;
				slow = slow->next;
			}
			printf("Cycle length: %d\n", cycle_length);
			return (i);
		}
	}
	printf("No cycle found.\n");
	return (i);
}
