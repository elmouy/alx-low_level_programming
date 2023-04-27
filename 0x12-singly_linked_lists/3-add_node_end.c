#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 *
 * Description: adds a new node at the end of linked list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *end, *ptr;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	if (str)
	{
		end->str = _strdup(str);
		while (str[i] != '\0')
			i++;
		end->i = i;
	}
	else
	{
		end->str = NULL;
		end->i = 0;
	}
	end->next = NULL;
	if (*head)
	{
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = end;
	}
	else
		*head = end;
	return (end);
}
