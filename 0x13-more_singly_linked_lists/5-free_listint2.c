#include "lists.h"

/**
 *
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head  = (*head)->next;
		free(temp);
	}
	*head = (NULL);
}
