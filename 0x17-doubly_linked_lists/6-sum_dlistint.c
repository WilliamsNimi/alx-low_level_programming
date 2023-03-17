#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint- A sum function for lists
 * Description: This function sums all the elements of a list
 * @head: the list whose elements are to be summed
 * Return: Returns sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum, count;

	sum = 0;
	count = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		count++;
	}
	if (count == 0)
	{
		return (0);
	}
	return (sum)
}
