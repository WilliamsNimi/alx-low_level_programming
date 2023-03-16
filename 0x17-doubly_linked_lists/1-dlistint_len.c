#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len- Printing doubly linkedlists
 * Description: printing a doubly linkedlist
 * @h: pointer to the list
 * Return: returns the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = malloc(sizeof(dlistint_t));
	current = h;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
