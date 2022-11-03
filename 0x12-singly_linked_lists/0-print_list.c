#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints all the elements of list_t
 *@h: pointer to struct
 *Return: number of nodes
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
