#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_error(const char *message);
int main(int argc, char **argv);
int copy_file(const char *source, const char *destination);


#endif
