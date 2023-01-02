#include "main.h"
/**
 * _memcpy- This is the memcpy function
 *
 * Description: This function copies n bytes from src to dest
 * @dest: The destination to be copied to
 * @src: The source to be copied from
 * @n: The number of bytes to be copied
 * Return: This function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
