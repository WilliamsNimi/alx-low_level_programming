#include "main.h"
/**
 * create_array- This is the create array function
 *
 * Description: This function creates an array and initializes it with characters
 * @size: The size of the array
 * @c: the character to initialize the array with
 * Return: Returns a pointer or NULL
 */
char *create_array(unisigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
