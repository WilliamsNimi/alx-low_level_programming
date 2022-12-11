#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This functions prints a pattern of numbers
 * Return: Returns 0
 */
int main(void)
{
	int a;
	int b;
	int counter = 1;

	for (a = 0; a <= 9; a++)
	{
		b = counter;
		while (b <= 9)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
