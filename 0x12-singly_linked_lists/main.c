#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Asaia");
	add_node_end(&head, "Augustin");
	print_list(head);
	return (0);
}
