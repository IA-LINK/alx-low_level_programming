#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: Pointer with the address of the pointer to the first node
 * @str: Pointer with the address of the string
 * Return: adress of the node created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *j, *temp;
	unsigned int n;

	j = malloc(sizeof(list_t));
	if (j == NULL)
	{
		return (NULL);
	}
	j->str = strdup(str);
	if (j->str == NULL)
	{
		free(j);
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	j->len = n;
	j->next = NULL;
	if (*head == NULL)
	{
		*head = j;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = j;
	}
	return (j);
}
