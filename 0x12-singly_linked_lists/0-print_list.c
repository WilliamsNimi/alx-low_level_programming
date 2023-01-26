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
	size_t nodes;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		nodes = nodes + 1;
		h++;
	}
	return (nodes);
}
