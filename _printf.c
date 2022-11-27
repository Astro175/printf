#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
  * _printf - Prints out a formatted string
  * @format: format specifier
  * @...: variadic parameteras
  * Return: returns number of characters printed
  */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{

		}
	}
	return (count);
}
