#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);

/**
 * main - This main
 * @argc: count.
 * @argv: values.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_in, fd_out;
	int rd_len, close_err;
	char *buf, *file_from;
	char *file_to;

	buf = NULL;
	rd_len = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_in = open(file_from, O_RDONLY);
	fd_out = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rd_len > 0)
	{
		rd_len = read_file(file_from, &buf, fd_in);
		if (!rd_len)
			break;
		
		write_copy(file_to, fd_out, buf, rd_len);
	}

	free(buf);
	close_err = close(fd_in);
	if (close_err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_in);
		exit(100);
	}
	close_err = close(fd_out);
	if (close_err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_out);
		exit(100);
	}
	return (0);
}

/**
 * read_file - Reads a file
 * @file: the file to read
 * @buf: buffer
 * @fd: file...
 *
 * Return: bytes
 */
static ssize_t read_file(char *file, char **buf, int fd)
{
	ssize_t rd_len;
	char *tmp_buf;

	tmp_buf = malloc(sizeof(char) * BUFFER_SIZE);
	if (tmp_buf == NULL)
		exit(99);

	rd_len = read(fd, tmp_buf, BUFFER_SIZE);
	if (rd_len < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	*buf = tmp_buf;

	return (rd_len);
}

/**
 * write_copy - Writes to file
 * @file: file to write to
 * @fd: file descript
 * @buf: buffer
 * @len: length
 *
 */
static void write_copy(char *file, int fd, char *buf, int len)
{
	ssize_t wr_len;
	int wr_err;

	wr_len = write(fd, buf, len);
	if (wr_len < 0 || wr_len != len)
	{
		wr_err = (wr_len < 0) ? 99 : 98;
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(wr_err);
	}
}
