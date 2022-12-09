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
	while (num <= 102)
	{
		if (num > 9)
		{
			num = num + ascii;
				putchar(num + '0');
				ascii++;
				num--;
		}
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
