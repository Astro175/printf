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
	int flag = 0;
	int count = 0;
	int i, a = 1, c;
	unsigned int num = va_arg(b, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if ((p >> 32 - i))
			flag = 1;
		if (flag)
		{
			c = p >> (31 - i);
			_putchar(c + '0');
			count++;
		}
	}
	if(count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
