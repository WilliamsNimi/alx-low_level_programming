#include "main.h"
#include <stdio.h>
/**
 * _isdigit- This is the _isdigit function
 *
 * Description: This function checks to see if the argument is a digit
 * @c: This is the value to be checked
 * Return: it returns 1 if true, 0 is false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
