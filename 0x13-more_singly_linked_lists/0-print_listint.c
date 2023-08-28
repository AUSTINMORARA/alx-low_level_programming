#include "lists.h"

/**
 * print_listint - prints all elements of an int linked list.
 * @h: node that point to the first node.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	return (count);
}
