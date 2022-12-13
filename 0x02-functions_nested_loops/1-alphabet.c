#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints alphabets a-z using _putchar
 * Return: returns 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
