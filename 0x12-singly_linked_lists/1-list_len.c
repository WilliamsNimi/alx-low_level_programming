#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len- This is the list_len function
 * Description: This function returns the number of elements of a linkedlist
 * @h: The linkedlist whose elements are to be printed
 * Return: Returns the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *currentNode;
	int nodes;

	nodes = 0;
	currentNode = malloc(sizeof(list_t));
	currentNode = h;
	while (currentNode != NULL)
	{
		nodes = nodes + 1;
		currentNode = currentNode->next;
	}
	return (nodes);
}
