#include "lists.h"

/**
 *pop_listint - deletes the head node and returns the head node's data
 *@head: head of the list
 *Return: the data in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *todelete;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		todelete = *head;
		*head = (*head)->next;
		free(todelete);
	}
	return (data);
}
