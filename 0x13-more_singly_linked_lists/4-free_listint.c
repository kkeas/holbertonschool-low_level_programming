#include "lists.h"

/**
 *free_listint - a function that frees listint_t
 *@head: head of the list
 *Return: 0
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
