#include "main.h"

/**
* main - copies contents of one file to another.
* @ac: number of command line arguments
* @av: arguments
* Return: Always 0;
*/

int main(int ac, char **av)
{
	int fd1, fd2, f_read;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY |  O_TRUNC, 0664);
	while ((f_read = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, f_read) != f_read || fd2 < 0)
		{
		dprintf(2, "Error: Can't write to %s", av[2]);
			exit(99);
		}
	}
	if (f_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	close_file(&fd1);
	close_file(&fd2);

	return (0);
}

/**
* close_file - closes a file
* @fd: file desciptor of file
* Return: 0 on success or -1 on failure
*/
int close_file(int *fd)
{
	int f_close = close(*fd);

	if (f_close < 0)
	{
		dprintf(2, ": Can't close fd %d", *fd);
		exit(100);
	}
	return (f_close);
}
