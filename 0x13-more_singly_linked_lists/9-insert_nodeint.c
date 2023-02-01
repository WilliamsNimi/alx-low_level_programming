#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index- This is the insert_nodeint_at_index function
 * Description: This function inserts a node at a particular location
 * @head: The list to be inserted in
 * @idx: The insertion point
 * @n: The element of the new node to be inserted
 * Return: Returns a pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	int i;

	newNode = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
