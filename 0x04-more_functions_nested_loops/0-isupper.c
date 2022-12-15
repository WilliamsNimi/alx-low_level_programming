#include "main.h"
#include <stdio.h>
/**
 * _isupper- This is the isupper function
 *
 * Description: This function checks if a letter is uppercase
 * @c: This is the alphabet to be checked
 * Return: THis function returns 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
