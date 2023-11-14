#include "main.h"
/**
 * _printf -  prints whatever is sent to it to stdout
 * @format: the format of the string to be printed
 *
 * Return: the number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char prv;
	int l, i;

	l = 0;
	prv = '\0';
	va_start(args, format);
	if (format == NULL)
		l = l + _print_string(va_arg(args, char *));
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			prv = '%';
			continue;
		}
		if (prv == '%' && *(format + i) == 's')
		{
			l = l + _print_string(va_arg(args, char *));
			prv = '\0';
		}
		else if (prv == '%' && *(format + i) == 'c')
		{
			l = l + _print_char((char)va_arg(args, int));
			prv = '\0';
		}
		else
			l = l + _print_char(*(format + i));
	}
	va_end(args);
	return (l);
}
