#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
The function "add_node_end" inserts a new node at the end of a linked list of type "list_t".

Input parameter "head" is a pointer to a pointer to the head of the linked list.

Input parameter "str" is a pointer to a dynamically allocated string.

The function returns an integer value of 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}

