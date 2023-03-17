#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index- The get_dnodeint_at_index function
 * Description: This is a function to get the node at an index
 * @head: List to search
 * @index: the index to search with
 * Return: Returns the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
