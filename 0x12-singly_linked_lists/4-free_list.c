#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer with the first node
 * Return: Always 0.
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		list_t *temp = head;

		free(temp->str);
		free(temp);
	}
}
