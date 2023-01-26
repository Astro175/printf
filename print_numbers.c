#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_i(va_list i)
{
	int n = va_arg(i, int);
	int num, last = n % 10, digit, exp = 1;
	int  count = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
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
			count++;
		}
	}
	_putchar(last + '0');

	return (count);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_d(va_list d)
{
	int n = va_arg(d, int);
	int num, last = n % 10, digit;
	int  count = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
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
			count++;
		}
	}
	_putchar(last + '0');

	return (count);
}
