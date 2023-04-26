#ifndef FILE_H
#define FILE_H

#include <stdlib.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#define BUFFER_SIZE 1024
#include<stdarg.h>
size_t _strlen(const char *str);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);




#endif
