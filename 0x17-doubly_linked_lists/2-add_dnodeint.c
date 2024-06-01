#include "lists.h"
/**
 * add_dnodeint - adds a new node to the doubly liked list
 *
 * @head: pointer to head of the list
 * @n: interger
 * Return: Address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd;

	if (head == NULL)
		return (0);

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->prev = NULL;
	new_nd->next = *head;
	*head = new_nd;

	if (new_nd->next != NULL)
		(new_nd->next)->prev = new_nd;

	return (new_nd);

}
