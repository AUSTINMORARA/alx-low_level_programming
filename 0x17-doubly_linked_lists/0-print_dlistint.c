#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list.
 * @h: pointer to head
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		print("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
