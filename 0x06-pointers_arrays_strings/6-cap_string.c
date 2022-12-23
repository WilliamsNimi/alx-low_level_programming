#include "main.h"
#include <stdio.h>
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

	while (*s != '\0')
	{
		if (i > 0)
		{
			if (*s == ',' || *s == ';' || *s == '.' || *s == '!' ||
			    *s == '?' || *s == '"' || *s == '(' || *s == ')' ||
			    *s == '{' || *s == '}' || *s == ' ' || *s == '\t' ||
			    *s == '\n')
			{
				if (!(*(s + 1) >= 65 && *(s + 1) <= 90))
				{
					if (*(s + 1) >= 97 && *(s + 1) <= 122)
					{
						*(s + 1) = *(s + 1) - 32;
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
int main(void)
{
	char str[] = "Expectations meets reality!";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	return (0);
}
