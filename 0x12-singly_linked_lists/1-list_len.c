#include "lists.h"
/**
The function "list_len" calculates the number of elements in a linked list of type "list_t".

Input parameter "h" is a pointer to the head of the linked list.

The function returns an integer that represents the number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

