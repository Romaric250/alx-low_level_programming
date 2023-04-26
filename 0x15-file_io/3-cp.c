#include "main.h"


/**
 * error_exit - prints an error message and exits with a given code
 * @code: the exit code to use
 * @format: the format string for the error message
 * @...: optional arguments for the format string
 *
 * Description: This function prints an error message to standard error and
 *              
 */
void error_exit(int code, const char *format, ...)
{
    va_list args;

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);

    exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, or the appropriate exit code on failure
 *
 * Description: This program copies the contents of one file to another file.
 *              
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, rd, wt;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to %s\n", argv[2]);

    while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        wt = write(fd_to, buffer, rd);
        if (wt != rd)
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    if (rd == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_to);

    return (0);
}
