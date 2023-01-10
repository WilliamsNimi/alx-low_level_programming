#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat- This is the str_concat function
 * Description: This function makes a copy of a string into memory
 * @s1: The string to be joined
 * @s2: The string to be joined
 * Return: Returns a pointer or Null
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i, j, k = 0;
	char *new_str;

	size1 = strlen(s1);
	size2 = strlen(s2);
	if (s1 == NULL)
		size1 = 0;
	if (s2 == NULL)
		size2 = 0;
	new_str = malloc(size1 + size2 + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = i; j < (size1 + size2); j++)
	{
		new_str[j] = s2[k];
		k++;
	}
	new_str[j + 1] = '\0';
	return (new_str);
}
