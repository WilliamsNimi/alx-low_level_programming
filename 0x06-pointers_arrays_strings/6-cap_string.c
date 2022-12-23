#include "main.h"
/**
 * cap_string-  This is a string upper function
 *
 * Description: This function converts first letters in words to upper case
 * @s: The string to be converted
 * Return: This function returns a string of characters
 */
char *cap_string(char *s)
{
	int i = 0;
	char p;

	while (*s != '\0')
	{
		if( i > 0)
		{
			p = s[i - 1];
			if( p == ',' || p == ';' || p == '.' || p == '!' ||
			    p == '?' || p == '"' || p == '(' || p == ')' ||
			    p == '{' || p == '}' || p == ' ' || p == '\t' ||
			    p == '\n')
			{
				if (!(*s >= 65 && *s <= 90))
				{
					if (*s >= 97 && *s <= 122)
					{
						*s = *s - 32;
					}
				}
			}
		}
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		i--;
	}
	return (s);
}
