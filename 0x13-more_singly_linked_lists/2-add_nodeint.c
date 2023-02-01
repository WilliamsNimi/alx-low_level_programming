#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - This is the add_nodeint function
 * Description: This function adds a node to a list at the start
 * @head: The list to be added to
 * @n: the  element of the new node
 * Return: Returns the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
