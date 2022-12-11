#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This functions prints a pattern of 3 numbers
 * Return: Returns 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int counter = 1;
	int counter2 = 2;

	for (a = 0; a <= 9; a++)
	{
		b = counter;
		while (b <= 9)
		{
			c = counter2;
			while (c <= 9)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
			counter2++;
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
