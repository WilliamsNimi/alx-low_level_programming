#include "main.h"
/**
 * _strncpy- this is the _strncpy function
 *
 * Description: This function copies strings from src to dest
 * @dest: This is the string to copy bytes to
 * @src: This is the string to copy bytes from
 * @n: THis is the number of bytes to be copied
 * Return: This function returns a string of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
