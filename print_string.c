#include "main.h"
/**
 * _print_string - prints a string pointed by a char *
 * @str: the char array to be printed
 *
 * Return: the number of chars printed
 */
int _print_string(char *str)
{
	int a;

	for (a = 0; str != NULL && *(str + a) != '\0'; a++)
		_print_char(*(str + a));
	return (a);
}
