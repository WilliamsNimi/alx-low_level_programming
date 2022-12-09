#include <stdio.h>
/**
 * main- this is the main function
 *
 * Description: This program outputs the hexadeximal numbers
 * Return: THis program returns 0
 */
int main(void)
{
	int num = 0;

	char ch = 'a';

	while (ch <= 'f')
	{
		if (num > 9)
		{
			putchar(ch);
			ch++;
		}
		else
		{
			putchar(num + '0');
			num++;
		}
	}
	putchar('\n');
	return (0);
}
