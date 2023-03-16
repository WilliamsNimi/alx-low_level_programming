#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint- Printing doubly linkedlists
 * Description: printing a doubly linkedlist
 * @h: pointer to the list
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	current = malloc(sizeof(dlistint_t));
	current = h;
	count = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
