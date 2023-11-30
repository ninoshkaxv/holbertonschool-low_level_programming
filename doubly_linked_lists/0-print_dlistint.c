#include "stdio.h"
#include "lists.h"

/**
 * print_dlistsint - it prints all the elements of a dlistsint_t list
 *
 * @h: the head of the list
 * Return: the numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
			return (count);

	while (h->prev != NULL)
			h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
