#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list.
 * @head: the beginning of the list.
 * @n: the lists data.
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *ptr;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	last = *head;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		last = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = last;
	}
	return (*head);
}
