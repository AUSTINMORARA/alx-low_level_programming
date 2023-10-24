#include "lists.h"

/**
 * print_listint - prints elements of a list.
 * @h: list holding the elements to be printed.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *pt;

	pt = h;
	if (pt == NULL)
		return (0);
	for (i = 0; pt != NULL; i++)
	{
		printf("%d", pt->n);
		pt = pt->next;
	}
}
