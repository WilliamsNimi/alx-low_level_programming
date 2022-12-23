#include "main.h"
/**
 * reverse_array- This is the reverse array function
 *
 * Description: This function reverses an array
 * @a: Array to be reversed
 * @n: The length of the array
 * Return: this function returns void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int beg = 0;
	int end = n;
	int temp = 0;

	while (i < (n / 2))
	{
		temp = a[beg];
		a[beg] = a[end - 1];
		a[end - 1] = temp;
		beg++;
		end--;
		i++;
		if (beg == end)
		{
			a[beg] = a[beg];
			break;
		}
	}
}
