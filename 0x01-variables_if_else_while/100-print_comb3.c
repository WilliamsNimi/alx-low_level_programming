#include<stdio>
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

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a != 8 && b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
