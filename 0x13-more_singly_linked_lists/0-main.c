#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of an int linked list.
 * @h: node that point to the first node.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
        int count;
        const listint_t *ptr;

        ptr = h;
        if (ptr == NULL)
                return (0);

        for (count = 0; ptr != NULL; count++)
        {
                printf("%d\n", ptr->n);
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
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
