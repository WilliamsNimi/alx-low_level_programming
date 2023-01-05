#include "main.h"
/**
 * _print_rev_recursion- This is the _print_rev_recursion function
 *
 * Description: This function prints a string in reverse using recursion
 * @s: The string to be reversed is taken as parameter
 * Return: it returns nothing
 */
void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	if (*s != '\0')
	{
		s = s + 1;
		_print_rev_recursion(s);
	}
	_putchar(*s);
	_putchar('\n');
}
