#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * add_nodeint - adds new node at the list beginning.
 *
 * @head: the node added.
 * @n: data in the node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t * temp;

	if (head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
