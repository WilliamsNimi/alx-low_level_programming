#include <stdio.h>
#include "main.h"
/**
 * _islower- This is the _islower function
 *
 * Description: This function checks if a function is lowercase
 * Return: It returns 0 or 1. 1 for True, 0 for False
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
