#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 * @num: new node int
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head, const int num)
{
	listint_t *ahead, *behind;

	ahead = malloc(sizeof(listint_t));
	
	if (ahead == NULL)
		return (NULL);

	ahead->n = num;
	ahead->next = NULL;

	if (*head == NULL)
		*head = ahead;

	else
	{
		behind = *head;
		
		while (behind->next != NULL)
			behind = behind->next;
		behind->next = ahead;
	}

	return (*head);
}
