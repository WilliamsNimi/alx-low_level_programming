#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint- Addnode function
 * Description: This function adds nodes at the head of a linkedlist
 * @head: the list to be edited
 * @n: the value to be stored in the head.
 * Return: Returns the address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->next = (*head);
	newNode->prev = NULL;
	newNode->n = n;
	*head = newNode;
	return (newNode);
}
