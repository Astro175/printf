#include "main.h"

/**
 * print_c - prints a character
 * @c: character to print
 * Return: Always 1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to be printed
 * Return: number of characters printed
 */

int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}

	return (count);
}

/**
 * hex_print - prints a char, hexadecimal value
 * @c: char to print
 * Return: numbers of chars printed (always 2)
 */

static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;

	for (count = 0; count < 2; count++)
	{
		if (d[count] > 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}

/**
 * print_S - prints a string and non printable character ascii value
 * @S: str to print
 * Return: numbers of character printed
 */

int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[i]);

		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_r - prints a string in reverse
 * @r: string to print
 *
 * Return: numbers of chars printed
 */

int print_r(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
