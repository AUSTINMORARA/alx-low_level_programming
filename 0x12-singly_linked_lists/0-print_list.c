#include "lists.h"

/**
  * print_list - prints all elements of a list.
  * @h: linked list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}
	return (cnt);
}
