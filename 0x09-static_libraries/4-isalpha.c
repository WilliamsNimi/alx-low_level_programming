#include <stdio.h>
#include "main.h"
/**
 * _isalpha- This is the _isalpha function
 *
 * Description: This function checks if a character is uppercase or lowercase
 * @c: character to be checked for alphabet
 * Return: It returns 0 or 1. 1 for True, 0 for False
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
