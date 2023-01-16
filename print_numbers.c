#include "main.h"

/**
 * print_d - prints an integer/decimal
 * @d: integer to print
 * Return: numbers of digits or chars printed
 */

int print_d(va_list d)
{
	int a[10];
	int j, sum, m, n, count;

	n = va_arg(d, int);

	count = 0;
	m = 1000000000;

	a[0] = n / m;

	for (j = 0; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
		{
			a[j] *= -1;
		}
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}

	}

	return (count);
}

