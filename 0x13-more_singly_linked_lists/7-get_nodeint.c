#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of the list
 *@head: the head of the list
 *@index: the nth position
 *Return: a pointer to the address of the head of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}

	return (head);
}
