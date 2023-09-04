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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR_INVALID_ARGUMENTS "Invalid number of arguments. Usage: elf_header elf_filename"
#define ERROR_OPEN_FILE "Failed to open the file."
#define ERROR_READ_HEADER "Failed to read the ELF header."
#define ERROR_NOT_ELF_FILE "Not an ELF file."

void print_error(const char *message);
void print_elf_header_info(const Elf64_Ehdr *header);

#endif
