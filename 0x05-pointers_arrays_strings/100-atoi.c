#include "main.h"
/**
 * _atoi- This is the atoi function
 *
 * Description: This function is meant to convert integers
 * @s: This is the string to search for integers
 * Return: This function returns an integer. It returns
 * 0 is no integer is found in the string.
 */
int _atoi(char *s)
{
	int digit = 0;
	char sign;

	while (*s != '\0')
	{
		if ((*s == 43 || *s == 45) && (*(s + 1) >= 48 && *(s + 1) <= 57))
		{
			sign = *s;
		}
		else if (*s >= 48 && *s <= 57)
		{
			digit = (digit * 10) + (*s - '0');
		}
		s++;
	}
	if (sign == 45)
		digit = digit * -1;
	return (digit);
}
