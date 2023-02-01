#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- This is the free_listint2 function
 * Description: This function frees a list and assigns it to NULL
 * @head: List to be freed
 * Return: Returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		free(head);
		head = NULL;
	}
	while (head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
