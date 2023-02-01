#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	print_listint(head);
	printf("----------------\n");
	insert_nodeint_at_index(&head, 1, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
