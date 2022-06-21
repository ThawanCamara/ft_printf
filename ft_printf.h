#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

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
int		ft_putunbr_n(unsigned int n, int fd);
int		ft_putptr_n(void *ptr, int fd);
int		ft_puthexlowlong_n(unsigned long n, int fd);
int		ft_puthexlow_n(unsigned int n, int fd);
int		ft_puthexup_n(unsigned int n, int fd);
#endif
