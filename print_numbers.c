#include "main.h"

/**
 * print_d - prints an integer/decimal
 * @d: integer to print
 * Return: numbers of digits or chars printed
 */

int print_d(va_list d)
{
	int n = va_arg(d, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 10)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
