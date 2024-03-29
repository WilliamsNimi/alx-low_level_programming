#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint- Function for free_dlistint
 * Description: This function frees list memory
 * @head: List to be retired
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
