#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list- This is the free list function
 * Description: This function frees memory from a list
 * @head: List to be freed
 * Return: Returns nothing
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		head = head->next;
	}
	free(head);
}
