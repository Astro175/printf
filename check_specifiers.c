#include "main.h"

/**
  * check_specifier- Checks for character that is a valid specifier and
  * assigns appropriate function to it
  * @format: the specified char *
  * Return: a pointer to a function
  */

int (*check_specifier(const char *format))(va_list)
{
	int i;
	func_t my_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"u", print_unsigned},
		{"b", print_b},
		{"o", print_octal},
		{"x", print_hexa},
		{"X", print_HexA},
		{"p", print_pointer},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL)
	{
		if (*(my_array[i].t) == *format)
		{
			break;
		}
	}
	return (my_array[i].f);
}
