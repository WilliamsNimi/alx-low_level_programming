#include "main.h"
/**
 * puts_half- This is the reverse function
 *
 * Description: This function prints the reverse of a string
 * @s: The string to be reversed
 * Return: This function is a void function. Returns nothing
 */
void puts_half(char *s)
{
	int count = 0;
	int count2 = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count2 = count / 2;
	while (count2 > 0)
	{
		--s;
		count2--;
	}
	while (*s != '\0')
	{
		if (*(s) != '\0')
			_putchar(*(s));
		s++;
	}
	_putchar('\n');
}
