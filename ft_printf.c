#include "libftprintf.h"
#include <stdio.h>

int	spec_handler(char c, va_list args)
{
	if (c == SPEC_CHAR)
		return (ft_putchar_n(va_arg(args, int), 1));
	if (c == SPEC_STR)
		return (ft_putstr_n(va_arg(args, const char *), 1));
//	if (c == SPEC_PTR)
	if (c == SPEC_DEC)
		return (ft_putnbr_n(va_arg(args, int), 1));
//	if (c == SPEC_INT)
//	if (c == SPEC_UDEC)
//	if (c == SPEC_HEXLOW)
//	if (c == SPEC_HEXUP)
//	if (c == SPEC_PERCENT)
	return (0);
}

int	print_handler(const char *s, va_list args)
{
	int	print_count;
	int check;	

	print_count = 0;
	while (*s)
	{
		check = 0;
		if (*s == '%' && *++s)
			check = spec_handler(*s, args);
		else
			check = ft_putchar_n(*s, 1);
		print_count += check;
		s++;
	}
	return(print_count);
}

int	ft_printf(const char *s, ...)
{
	int		print_count;
	va_list	args;
	
	va_start(args, s);
	print_count = print_handler(s, args);
	va_end(args);
	return (print_count);
}
