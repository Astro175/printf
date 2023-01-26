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
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}
