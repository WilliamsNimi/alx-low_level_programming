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
	int ascii = 88;
	char ch = 'a';
	while (num <= 102)
	{
		if (num > 9)
		{
			num = num + ascii;
			putchar(ch);
			ascii++;
			ch++;
			num--;
		}
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
