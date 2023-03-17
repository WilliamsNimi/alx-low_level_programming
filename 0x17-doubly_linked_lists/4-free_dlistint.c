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
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
	free(temp);
}
