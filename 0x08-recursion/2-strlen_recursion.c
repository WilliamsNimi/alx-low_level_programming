#include "main.h"
/**
 * _strlen_recursion-  This is the _strlen_recursion function
 *
 * Description: This function prints the length of a string
 * @s: It takes the string to be printed in as parameter
 * Return: It returns an integer being the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s));
	}
}
