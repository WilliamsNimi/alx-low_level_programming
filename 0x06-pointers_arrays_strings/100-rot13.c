#include "main.h"
/**
 * rot13- This is the rot13 function
 *
 * Description: This function shifts a character 13 places
 * @str: This is the string of characters to be shifted
 * Return: it returns a string of characters
 */
char *rot13(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if ((!(*str < 65) && *str > 77 && *str < 91) || (!(*str < 97) &&
						      *str > 109 && *str < 123))
		{
			*str = *str - 13;
		}
		else
		{
			*str = *str + 13;
		}
		str++;
		count++;
	}
	while (count > 0)
	{
		str--;
		count--;
	}
	return (str);
}
