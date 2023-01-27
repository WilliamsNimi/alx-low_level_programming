#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end- This is the add node end function
 * Description: THis function adds a node to an existing list at the end
 * @head: A pointer to a pointer which is the head of the list
 * @str: A string that needs to be duplicated
 * Return: Returns a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	char *str2;

	str2 = strdup(str);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		exit(98);
	}
	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->str = str2;
	temp->len = strlen(str2);
	temp = *head;
	return (temp);
}
