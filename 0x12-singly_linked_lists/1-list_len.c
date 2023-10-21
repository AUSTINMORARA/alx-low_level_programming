#include "lists.h"

/**
  * list_len - shows number of elements
  * @h: the linked list
  * Return: list number of elements.
  */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
