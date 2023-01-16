#include "main.h"

/**
 * print_d - prints an integer/decimal
 * @d: integer to print
 * Return: numbers of digits or chars printed
 */

int print_d(va_list d)
{
	int a[10];
	int j, n, count;
	int m = 1000000;

	n = va_arg(d, int);
	count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	for (j = 0; j < 10; j++)
	{
		a[j] = n % 10;
		n = n / 10;
		if (n == 0 && j > 0)
			break;
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar('0' + a[j]);
		count++;
	}
	return (count);
}

