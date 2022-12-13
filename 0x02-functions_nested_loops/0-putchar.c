#include <stdio.h>
/**
 * _putchar- This is the _putchar function
 *
 * Description: This function prints character
 * @character: The character to be written to screen
 *
 * Return: The function returns 0
 */
int _putchar(char character)
{
	_fputchar(character);
	return (0);
}
/**
 * main- This is the main function
 *
 * Description: This function prints _putchar to screen with a new line
 * Return: it returns 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}