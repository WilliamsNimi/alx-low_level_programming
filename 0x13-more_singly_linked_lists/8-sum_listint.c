#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint- This is the sum_listint function
 * Description: THis function sums the elements of nodes of a list
 * @head: This is the list of which elements are to be summed
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
