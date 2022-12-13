#include <unistd.h>
/**
 * _putchar- This is the skeleton of the _putchar function
 *
 * Description: This function prints characters to screen
 * @__c: this is the character to be printed on screen
 *
 * Return: It returns 0
 */
int _putchar(char __c)
{
	return (write(1, &__c, 1));
}
int print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}