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
	listint_t *tmp;

	if (head->next == NULL)
	{
		free(head);
		exit(98);
	}
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
