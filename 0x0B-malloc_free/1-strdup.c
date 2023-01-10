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
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(size);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
