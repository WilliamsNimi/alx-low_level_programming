#include "main.h"
/**
 * _puts_recursion- This is the _puts_recursion function
 *
 * Description: This function prints characters on the screen recursively
 * @s: The string to be printed
 * Return: Returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
