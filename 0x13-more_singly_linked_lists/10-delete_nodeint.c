#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- This is the delete_nodeint_at_index function
 * Description: This function deletes a node at index
 * @head: the list to be traversed
 * @index: the point of deletion
 * Return: returns 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		*head = (*head)->next;
	}
	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	free(tmp);

	return (1);
}
