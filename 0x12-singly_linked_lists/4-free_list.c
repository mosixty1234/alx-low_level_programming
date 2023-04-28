#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
The function "free_list" frees the memory used by a linked list of type "list_t".

Input parameter "head" is a pointer to the head of the linked list.

The function does not return any value. It simply frees the memory allocated for each node in the linked list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}

