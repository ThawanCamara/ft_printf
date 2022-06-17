#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

typedef enum e_specs
{
	SPEC_CHAR = 'c',
	SPEC_STR = 's',
	SPEC_PTR = 'p',
	SPEC_DEC = 'd',
	SPEC_INT = 'i',
	SPEC_UDEC = 'u',
	SPEC_HEXLOW = 'x',
	SPEC_HEXUP = 'X',
	SPEC_PERCENT = '%'
}	t_specs;


int		ft_printf(const char *s, ...);

int		ft_putchar_n(char s, int fd);
int		ft_putstr_n(const char *s, int fd);
int		ft_putnbr_n(int n, int fd);
#endif
