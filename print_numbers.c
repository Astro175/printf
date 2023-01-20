#include "main.h"

/**
 * print_d - prints an integer/decimal
 * @d: integer to print
 * Return: numbers of digits or chars printed
 */

int print_d(va_list d)
{
	int j, n, count;
	int *a;
	int size = 0;
	n = va_arg(d, int);
	count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
		return count;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	for (j = n; j > 0; j = j / 10, size++);
	a = malloc(size * sizeof(int));

	for (j = 0; j < size; j++)
	{
		a[j] = n % 10;
		n = n / 10;
	}
	for (j = size - 1; j >= 0; j--)
	{
		_putchar('0' + a[j]);
		count++;
	}
	free(a);
	return (count);
}

