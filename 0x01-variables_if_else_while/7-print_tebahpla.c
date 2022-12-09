#include <stdlib.h>
#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints alphabets backwards
 * Return: it returns 0
 */
int main(void)
{
	char ch;
	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
