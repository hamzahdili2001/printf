#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct convert - takes a array of arrays with formater and it's function  
*
* @format: The formater
* @func: The function associated with the formater
*/
struct marcher
{
	char *formater;
	int (*func)(va_list);
};
typedef struct marcher match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int print_string(va_list arg);
int print_char(va_list arg);
int print_number(va_list arg);
int print_percent(va_list arg);

#endif
