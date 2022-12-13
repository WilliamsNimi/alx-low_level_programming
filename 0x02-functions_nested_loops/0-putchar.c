#include <unistd.h>
/**
 * _putchar- This is the _putchar function
 *
 * Description: This function prints a new character to screen with a new line
 * Return: it returns 0
 */
int _putchar(char ch)
{
	int count = 0;

	ch[] = "_putchar";

	while (ch[count] != '\0')
	{
		_putchar(ch[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
