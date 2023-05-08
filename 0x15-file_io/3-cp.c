#include "main.h"
#include <stdio.h>

void cpy_file(const char *src_path, const char *dest_path);

/**
  * main - Entry point
  * @argc: variable for the number of argument
  * @argv: variable to pointer for argument vector
  *
  * Return: Always (0) Success
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cpy_file(argv[1], argv[2]);

	exit(0);
}

/**
 * cpy_file - Function to copy content from one file to the other
 * @src_path: variable for the source path of file
 * @dest_path: variable for the destination path of file
 *
 * Return: void type
 */
void cpy_file(const char *src_path, const char *dest_path)
{
	int src_file, dest_file, read_size, write_size;
	char buffer[BUF_SIZE];

	src_file = open(src_path, O_RDONLY);
	if (!src_path || src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}

	dest_file = open(dest_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_size = read(src_file, buffer, BUF_SIZE)) > 0)
	{
		write_size = write(dest_file, buffer, read_size);
		if (write_size != read_size || dest_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_path);
			exit(99);
		}
	}

	if (read_size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}

	if (close(src_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}

}
