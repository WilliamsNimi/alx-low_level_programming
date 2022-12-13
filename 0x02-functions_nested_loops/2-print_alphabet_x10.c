#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- This is the 10x_print_alphabet function
 *
 * Description: This function prints alphabets a-z using _putchar 10x
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter = 1;

	while(counter <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		counter++;
	}
}
