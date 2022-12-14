#include "main.h"
/**
 * main- This is the _putchar function
 *
 * Description: This function prints a new character to screen with a new line
 * Return: it returns 0
 */
int main(void)
{
	char *cha = "_putchar";

	while (*cha)
	{
		_putchar(*cha);
		cha++;
	}
	_putchar('\n');
	return (0);
}
