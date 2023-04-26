#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
        int fd, text_length = 0;

        if (!filename)
                return (-1);

        fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (fd == -1)
                return (-1);

        if (text_content)
                text_length = write(fd, text_content, _strlen(text_content));

        close(fd);

        return (text_length == -1 ? -1 : 1);
}

/**
 * _strlen - computes the length of a string
 * @str: the string to compute the length of
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
        size_t len = 0;

        while (str && str[len])
                len++;

        return (len);
}
