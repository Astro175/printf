#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int (*check_specifier(char *))(va_list);

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
