#include <stdlib.h>
#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints alphabets except e and q
 * Return: it returns 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
