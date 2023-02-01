#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	int n;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	print_listint(head);
	n = pop_listint(&head);
	printf("- %d\n", n);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}
