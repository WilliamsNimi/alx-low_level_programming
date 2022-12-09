#include <stdlib.h>
#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints alphabets a-z
 * Return: returns 0
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar("\n");
	return (0);
}
