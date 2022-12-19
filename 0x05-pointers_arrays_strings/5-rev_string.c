#include "main.h"
/**
 * rev_string- This is the reverse function
 *
 * Description: This function prints the reverse of a string
 * @s: The string to be reversed
 * Return: This function is a void function. Returns nothing
 */
void rev_string(char *s)
{
	int count = 0;
	int count2 = 0;
	int i = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count2 = count;
	while (count2 > 0)
	{
		--s;
		count2--;
	}
	while (i <= count)
	{
		*(s + count2) = *(s + count);
		count = count - 1;
		count2 = count2 + 1;
	}
}
