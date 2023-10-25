#include "lists.h"
#include <stdio.h>

/**
 * through_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not gone through - 0
 *         Else - return number of unique nodes.
 */

size_t through_listint_len(const listint_t *head)
{
	const listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = j;
			while (i != j)
			{
				node++;
				i = i->next;
				j = j->next;
			}

			i = i->next;
			while (i != j)
			{
				node++;
				i = i->next;
			}

			return (node);
		}

		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = through_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
