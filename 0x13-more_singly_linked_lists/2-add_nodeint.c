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
	listint_t * ptr;
	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	head->next =  NULL;

	ptr->next = head;
	head = ptr;
	return (head);
}
