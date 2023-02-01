#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- This is the fre_listint function
 * Description: This function frees list memory
 * @head: List to be freed
 * Return: Returns nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
		head = NULL;
	}
}
