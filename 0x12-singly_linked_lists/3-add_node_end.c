#include "lists.h"

/**
 * add_node_end -  adds a n node at the end of a list_t list.
 * @head: Pointer with the address of the pointer to the first node
 * @str: Pointer with the address of the string
 * Return: adress of the node created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = (list_t *)malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = n_node;
	}
	return (n_node);
}
