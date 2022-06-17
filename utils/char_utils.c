#include "../libftprintf.h"

int	ft_putchar_n(char s, int fd)
{
	return (write(fd, &s, 1));
}

int	ft_putstr_n(const char *s, int fd)
{
	size_t	len;

	if (s == 0)
		s = "(null)";
	len = ft_strlen((char *)s); 
	if (len == 0)
		return (0);
	return (write(fd, s, len));
}
