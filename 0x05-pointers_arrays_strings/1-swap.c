#include "main.h"
/**
 * swap_int- This is the swap int function
 *
 * Description: This function swaps 2 integer values
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: This is a void function. Returns nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
