#include "main.h"
/**
 * _pow_recursion- This is the _pow_recursion function
 *
 * Description: This function prints the powers of a number recursively
 * @x: It takes the number to be raised by a certain power as parameter
 * @y: It takes the power with which to raise a number as parameter
 * Return: It returns the value of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
