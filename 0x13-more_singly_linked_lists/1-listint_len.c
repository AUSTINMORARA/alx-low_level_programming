#include<stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements of a linked list.
 * @h: first node that starts the list.
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *ptr;
	
	ptr = h;

	if (ptr == NULL)
		return(0);

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	return (count);
}
