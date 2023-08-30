#include "lists.h"

/**
 * free_listint - free a linked list.
 *
 * @head: first node.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	if (ptr == NULL)
		return;
	while (ptr->next != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
