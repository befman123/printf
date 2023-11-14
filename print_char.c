#include "main.h"
/**
 * _print_char - prints a character to the output string
 * @c: the character to be printed (to stdout)
 *
 * Return: 0 on success, negative 1 if not
 */
int _print_char(char c)
{
	return (write(1, &c, 1));
}
