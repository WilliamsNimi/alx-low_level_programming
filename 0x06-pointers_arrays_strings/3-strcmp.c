#include "main.h"
/**
 * _strcmp- This is the strcmp function
 *
 * Description: This function compares 2 strings
 * @s1: String to be compared to
 * @s2: String to be compared to s1
 * Return: It returns an integer which is the difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int s1i;
	int s2i;

	while (s1 != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	s1i = (unsigned char) s1[i];
	s2i = (unsigned char) s2[i];

	return (s1i - s2i);
}
