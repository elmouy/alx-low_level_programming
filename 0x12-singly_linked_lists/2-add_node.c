#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Description: adds a new node at the beginning
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;

	while (str[i] != '\0')
                i++;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = _strdup(str);
	ptr->i = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
