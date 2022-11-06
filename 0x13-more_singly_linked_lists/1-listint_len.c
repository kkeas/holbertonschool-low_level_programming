#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: head of the list
 *Return: the number of elements in the list
 *
 */

size_t listint_len(const listint_t *h)
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
