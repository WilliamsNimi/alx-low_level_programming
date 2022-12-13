#include <unistd.h>
/**
 * _putchar- This is the _putchar function
 *
 * Description: This function prints a new character to screen with a new line
 * Return: it returns 0
 */
int _putchar(void)
{
	char *print_string = "_putchar";

	while (*print_string != '\0')
	{
		_putchar(*print_string);
		print_string++;
	}
	_putchar('\n');
	return (0);
}
