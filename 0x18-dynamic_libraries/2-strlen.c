#include "main.h"
/**
 * _strlen- This is the strlen function
 *
 * Description: This function prints the length of a string
 * @s: This is the value of the string to be checked
 * Return: THis function returns the length of the string
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
