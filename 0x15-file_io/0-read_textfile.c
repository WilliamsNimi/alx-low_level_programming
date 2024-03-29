#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * read_textfile- This is the read_textfile function
 * Description: This function reads and prints text files to standard output
 * @filename: The file to be read
 * @letters: the number of characters to be printed
 * Return: Returns the number of characters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	FILE *new_file;
	char ch;

	if (filename == NULL)
		return (0);
	new_file = fopen(filename, "r");
	if (new_file == NULL)
	{
		return (0);
	}

	do {
		if (letters > 0)
		{
			ch = fgetc(new_file);
			write(1, &ch, 1);
			count = count + 1;
		}
		letters--;
	} while (letters > 0);
	fclose(new_file);
	return (count);
}
