#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints numbers with commas
 * Return: it returns 0
 */
int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		if(num == 9)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
