#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append to
 * @text_content: NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
		
    	int fd, text_length = 0, append = 1;

    	if (!filename)
        	return (-1);

    	if (!text_content)
        	return (1);

    	fd = open(filename, O_WRONLY | O_APPEND);
    	if (fd == -1)
        	return (-1);

    	text_length = _strlen(text_content);
    	if (write(fd, text_content, text_length) != text_length)
       		append = -1;

    	if (close(fd) == -1)
        	append = -1;

    	return (append);
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
