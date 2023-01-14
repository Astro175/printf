#include "main.h"

/**
 * print_hex - Prints hexadecimal numbers
 * @n: integer
 * @c: flag to determine the case of printing
 * Return: numbers of bytes
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_x - takes an unsigned int and prints it in lowercase notation
 * @x: unsigned int to print
 * Return: number of digits printed
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - takes an unsigned int and prints in uppercase notation
 * @X: unsigned int to print
 * Return: number of digits printed
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(x, unsigned int), 1));
}

/**
 * print_p - prints an address
 * @p: address to print
 * Return: number of character
 */

int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}

		return (count);
	}

	_putchar('0');
	_putchar('x');
	count = 2;

	m = pow(16, 15);
	a = n / m;

	for (i = 0; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
			{
				_putchar('0' + a[i]);
			}
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
