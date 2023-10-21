#include "lists.h"

/**
  * add_node - adds a new node at the beginning.
  * @head: original linked list.
  * @str: string to be added.
  * Return: Address of the new list / NULL if failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;
		*head = tmp;

		return (tmp);
	}

	return (0);
}

/**
  * _strlen - Returns the string's length
  * @s: string to count
  * Return: string's length
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
