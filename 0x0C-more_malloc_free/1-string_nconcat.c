#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- This is the string_nconcat function
 * Description: This function concats nbytes of string 2 to string 1
 * @s1: The string to be reallocated additional memory
 * @s2: THe string to be copied
 * @n: The number of bytes to be copied
 * Return: Returns a pointer to the new memory location of s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s3;

	if (n >= strlen(s2))
		n = strlen(s2);

	s3 = malloc((strlen(s1) + n + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';

	return (s3);
}
