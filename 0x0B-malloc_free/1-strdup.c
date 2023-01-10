#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup- This is the _strdup function
 *
 * Description: This function makes a copy of a string into memory
 * @str: The string to be copied
 * Return: Returns a pointer or Null
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *new_str;

	size = strlen(str);
	if (str == NULL)
	{
		return;
	}
	new_str = malloc(size + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i + 1] = '\0';
	return (new_str);
}
