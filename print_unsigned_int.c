#include "main.h"

/**
 * print_u - prints an unsigned in decimal notation
 * @u: unsigned int
 * Return: number of int printed
 */

int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}

	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to print
 * Return: numbers of digits printed
 */

int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned int to print
 * Return: number of digits printed
 */

int print_b(va_list b)
{
	unsigned int n, i;
	int count;
	bool digit_printed = false;

	n = va_arg(b, unsigned int);

	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			digit_printed = true;
		}
		else if (digit_printed)
		{
			putchar('0');
		}
	}
	if (!digit_printed)
	{
		putchar('0');
	}
	return (32);
}

