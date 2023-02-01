#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- This is the pop_listint function
 * Description: This function pops a node from a list
 * @head: List to be popped
 * Return: Returns the value of the popped list
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	tmp = (*head);
	*head = (*head)->next;
	free(tmp);

	return (n);
}
