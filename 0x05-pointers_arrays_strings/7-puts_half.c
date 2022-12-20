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
	int i = 0;

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
	count = count / 2;
	while (i <= count)
	{
		if (*(s) != '\0')
			_putchar(*(s));
		count = count - 1;
	}
	_putchar('\n');
}
