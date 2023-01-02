#include "main.h"
/**
 * _memset- This is the memset function
 *
 * Description: This function fills n bytes of memory with a constant byte
 * @s: The memory area to be filled
 * @b: The byte used for filling
 * @n: The amount of memory to be filled
 * Return: This function returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
