#include "lists.h"

/**
 * pop_listint - removes head of the linked list.
 * @head: first node; node to be deleted
 * Return: node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	int num;

	ptr = *head;

       	num = ptr->n;

	if (head == NULL)
		return (0);	
	ptr = ptr->next;

	return (num);
}
