#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index- This is the get_node_int_at_index function
 * Description: This function returns the node at an index
 * @head: The list to be traversed
 * @index: the index at which a node is returned
 * Return: returns a pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
