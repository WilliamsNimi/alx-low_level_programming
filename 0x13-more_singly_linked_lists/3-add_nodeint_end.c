#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- This is the add_nodeint_end function
 * Description: This function adds a node to the end of a list
 * @head: The list to be added to
 * @n: the element of the new node to be added to the list
 * Return: Returns a pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
