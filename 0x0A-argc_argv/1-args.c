#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints the number of arguments passed to it
 * @argc: This parameter holds the number of arguments passed to the function
 * @argv: This parameter is a list of all the arguments passed to the program
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		printf("%s", argv[argc]);
	}
	printf("%d\n", (argc - 1));
	return (0);
}
