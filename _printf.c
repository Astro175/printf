#include "main.h"

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
	int (*f)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}

		if (!format[i])
			return (count);
		f = check_specifier(&format[i + 1]);


		if (f != NULL)
		{
			count += f(args);
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	return (count);
}
