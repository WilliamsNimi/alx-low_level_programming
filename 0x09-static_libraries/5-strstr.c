#include "main.h"
/**
 * _strstr- This is the _strstr function
 *
 * Description: This function finds a substring in a string
 * @haystack: String we are searching
 * @needle: String we are searching for
 * Return: This function returns a pointer to the beginning of the located
 * substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					continue;
				}
				else
				{
					break;
				}
				if (needle[j + 1] == '\0')
				{
					return (haystack);
				}
			}
		}
	}
	return (NULL);
}
