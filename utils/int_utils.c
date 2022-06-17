#include "../libftprintf.h" 

int	ft_putnbr_n(int n, int fd)
{
	size_t			num;
	int				sign;
	static int		count;
	
	sign = 0;
	count = 0;
	if (n >= 0)
		num = n;
	else
	{
		num = (size_t) n * - 1;
		sign += ft_putchar_n('-', fd);
	}
	if (num >= 10)
		ft_putnbr_n(num / 10, fd);
	count += ft_putchar_n(num % 10 + '0', fd);
	return (count + sign);
}
