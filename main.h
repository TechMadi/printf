#ifndef _MAIN_H_
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(char *ss);
int print_d(int n);
int print_b(int n);
int counter(int n);

#endif /*_MAIN_H_*/
