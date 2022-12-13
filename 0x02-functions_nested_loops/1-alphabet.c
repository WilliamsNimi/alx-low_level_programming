#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- This is the main function
 *
 * Description: This function prints alphabets a-z using _putchar
 * Return: returns 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
