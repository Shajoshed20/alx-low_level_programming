#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024

/*Description: Header for all the function in this project*/

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*functions for elf file*/
void check_elf(unsigned char *elf_id);
void print_elf_class(unsigned char *elf_id);
void osabi_print(unsigned char *elf_id);
void version_print(unsigned char *elf_id);
void data_print(unsigned char *elf_id)
void print_elf_magic(unsigned char *elf_id);
void type_print(unsigned int elf_type, unsigned char *elf_id);
void abi_print(unsigned char *elf_id);
void entry_print(unsigned long int elf_entry, unsigned char *elf_id);
void end_elf(int elf);

#endif
