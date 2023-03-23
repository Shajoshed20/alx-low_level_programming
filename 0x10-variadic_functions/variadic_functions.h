#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct Display - structure defination for display.
 * @data_type: variable for the data type
 * @print: variable to print function matching with data type
 */
typedef struct Display
{
	char *data_type;
	void (*print)(va_list arg);

} displays;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
