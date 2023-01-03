#include "main.h"
/**
 * _strspn- This is the strspn function
 *
 * Description: This function counts how many bytes of a string is in another
 * @s: This is the string of characters to be searched
 * @accept: The string to search for
 * Return: This function returns the number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
