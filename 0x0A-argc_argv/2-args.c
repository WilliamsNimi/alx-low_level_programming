#include <stdio.h>
/**
 * main- This is the main function
 *
 * Description: This function prints all the arguments sent to it
 * @argc: This is the length of the arguments passed to the program
 * @argv: This is a list that holds all the arguments passed to the program
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
