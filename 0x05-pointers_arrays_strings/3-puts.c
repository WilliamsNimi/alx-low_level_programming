include "main.h"
/**
 * _puts- This function prints strings
 *
 * Description: This function prints string and a new line character
 * @str: String to be printed
 * Return: This is a void function. Doesn't return anything
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
