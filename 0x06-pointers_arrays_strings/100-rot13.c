#include "main.h"
#include <stdio.h>
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
	int shift = 13;

	while (*str != '\0')
	{
		if (*str > 109 && *str != ' ')
		{
			shift = shift * -1;
		}
		*str = *str + shift;
		str++;
		count++;
		shift = 13;
	}
	while (count > 0)
	{
		str--;
		count--;
	}
	return (str);
}
int main(void)
{
	char str2[] = "rotate by 13 places";

        printf("%s", rot13(str2));
	return (0);
}
