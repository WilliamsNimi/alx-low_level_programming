#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint- This is the print_listint function
 * Description: This function prints linkedlists
 * @head: List to be printed
 * Return: Returns the size of the list
 */
size_t print_listint(const listint_t *head)
{
	size_t counter;

	counter = 0;
	while (head != NULL)
	{
		counter = counter + 1;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (counter);
}
