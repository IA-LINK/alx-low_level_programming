#include "lists.h"

/**
 * add_nodeint - add node list on linked list.
 * @head: Head
 * @n: the new adding element
 * Return: the new adding element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
