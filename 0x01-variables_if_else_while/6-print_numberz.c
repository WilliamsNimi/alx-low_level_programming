#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function just prints numbers using putchar
 * Return: it returns 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
		putchar(i, '0');
	putchar('\n');
	return (0);
}
