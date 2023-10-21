#include "lists.h"

/**
  * add_node_end - adds node at the end of a list.
  * @head: original linked list.
  * @str: string to add to the node.
  * Return: address of the new list / NULL if failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	while (str)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = new;
			return (tmp);
		}
	}
	return (NULL);
}

/**
  * _strlen - returns the length of a string
  * @s: counted string
  * Return: str length
  */

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s += 1;
		i += 1;
	}

	return (i);
}

