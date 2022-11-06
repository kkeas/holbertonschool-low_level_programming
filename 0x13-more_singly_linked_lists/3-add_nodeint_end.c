#include "lists.h"

/**
 *add_nodeint_end - adds a new node to the end of the list
 *@head: the head of the list
 *@n: value
 *Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}	
		temp->next = new;
	return (new);
}
