#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list- This is the print_list function
 * Description: This function prints all the elements of a linkedlist
 * @h: The linkedlist whose elements are to be printed
 * Return: Returns the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *currentNode;
	size_t nodes;

	nodes = 0;
	currentNode = malloc(sizeof(list_t));
	currentNode = h;
	while (currentNode != NULL)
	{
		if (currentNode->str != NULL)
			printf("[%d] %s\n", currentNode->len, currentNode->str);
		else
			printf("[0] (nil)\n");
		nodes = nodes + 1;
		currentNode = currentNode->next;
	}
	return (nodes);
}
