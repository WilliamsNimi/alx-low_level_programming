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
	list_t *temp, *temp2;
	char *str2;

	str2 = strdup(str);
	temp = malloc(sizeof(list_t));
	temp2 = malloc(sizeof(list_t));
	temp2->str = str2;
	temp2->len = strlen(str2);
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp = *head;
	printf("%s%s", str, str2);
	while (temp->next != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = temp2;
			return (temp);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
