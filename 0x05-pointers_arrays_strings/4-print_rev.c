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
	int strlen = _strlen(*s);
	char rev[strlen];
	int count = _strlen(s);
	int count2 = 0;

	while (*s != '\0')
	{
		rev[count2] = s[count - 1];
		count--;
		count2++;
	}
	_puts(rev);
}
