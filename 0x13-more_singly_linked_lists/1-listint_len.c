#include "lists.h"
#include <stdlib.h>
/**
 * listint_len- This is the listint_len function
 * Description: This function prints the length of a linked list
 * @h: This list to be checked for length
 * Return: Returns the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		length = length + 1;
		h = h->next;
	}
	return (length);
}
