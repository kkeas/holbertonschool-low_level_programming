#include "lists.h"

/**
 *insert_nodeint_at_index - insert node at nth place
 *@head: the head of the list
 *@idx: where to place the new node
 *@n: the data
 *Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new, *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
