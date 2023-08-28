#include "lists.h"

/**
 * print_listint - print integer
 * @h: the element containing the list
 * Return: the node of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
