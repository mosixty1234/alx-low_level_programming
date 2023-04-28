#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
The function "print_list" prints all the elements in a linked list of type "list_t".

Input parameter "h" is a pointer to the head of the linked list.

The function returns the total number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}

