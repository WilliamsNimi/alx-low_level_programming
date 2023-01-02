#include "main.h"
/**
 *_strchr- This is the strchr function
 *
 * Description: This function searches a string for a character
 * @s: The string to search
 * @c: The character to find
 * Return: returns a pointer to the first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (*s);
		}
		s++;
	}
	return (NULL);
}
