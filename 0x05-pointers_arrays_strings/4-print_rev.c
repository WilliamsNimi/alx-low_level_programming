#include "main.h"
/**
 * print_rev- This is the reverse function
 *
 * Description: This function prints the reverse of a string
 * @s: The string to be reversed
 * Return: This function is a void function. Returns nothing
 */
void print_rev(char *s)
{
	int strlen = _strlen(s);

	while (*s != '\0')
	{
		_putchar(s[(strlen) - 1]);
			 s++;
	}
}
