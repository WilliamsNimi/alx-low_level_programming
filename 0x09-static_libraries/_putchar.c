#include <unistd.h>
/**
 * _putchar- Writes the character c to stdout
 *
 * Description: This function mimics putchar
 * @s: The characeter to be printed is taken as parameter
 * Return: Returns 1 on succes, -1 on error, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
