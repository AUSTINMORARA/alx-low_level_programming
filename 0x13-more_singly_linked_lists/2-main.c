#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
	ptr->data = n;
	head->next =  NULL;

	ptr->next = head;
	head = ptr;
	return (head);
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
