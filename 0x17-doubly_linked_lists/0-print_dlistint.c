#include "lists.h"
/**
*print_dlistint - prints a list
*
*@h: pointer to list
*
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
