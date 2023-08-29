#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - returns number of elements of a linked list.
 * @h: first node that starts the list.
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *ptr;
	
	ptr = h;

	if (ptr == NULL)
		return(0);

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	return (count);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
