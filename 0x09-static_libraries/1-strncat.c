#include "main.h"
/**
 * _strncat- this is the _strcat function
 *
 * Description: This function concatenates 2 strings
 * @dest: base string
 * @src: String to be added to base string
 * @n: Number of bytes to be copied
 * Return: This function returns a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int revcount = 0;
	int i;

	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	revcount = count;
	while (revcount > 0)
	{
		dest--;
		revcount--;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';
	return (dest);
}
