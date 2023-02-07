#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main- This is the main function
 * Description: This function copies file content from one to another
 * @argc: Number of arguments passed to the main function
 * @argv: List of the arguments passed
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	FILE *file_to, *file_from;
	char c;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w+");
	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	}
	c = fgetc(file_from);
	while (c != EOF)
	{
		fputc(c, file_to);
		c = fgetc(file_from);
	}
	fclose(file_from);
	fclose(file_to);
	return (0);
}
