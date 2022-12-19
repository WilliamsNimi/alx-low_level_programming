#include "main.h"
/**
 * _strcpy- this strcpy function
 *
 * Description: This function copies a string from one pointer to another
 * @dest: pointer to be copied
 * @src: pointer to be copied
 * Return: Returns a pointer
 */
char *_strcpy(char *dest, char *src)
{
	for (; (*dest = *src) != '\0'; dest++, src++)
		;
	return (*dest);
}
