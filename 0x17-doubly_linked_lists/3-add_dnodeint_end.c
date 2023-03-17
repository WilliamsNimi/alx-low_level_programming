#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end- Add node at end function
 * Description: This function adds a node at the end of the list
 * @head: the list to be added to
 * @n: The data to be contained by the node
 * Return: Returns the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	temp = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
