#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
int _putchar(char c);
/**
  *struct func - Data type structure for specifier pointers
  * @t: character string
  * @f: function that takes a function pointer
  */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;
#endif
