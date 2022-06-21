#include "../ft_printf.h" 

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

int	ft_putunbr_n(unsigned int n, int fd)
{
	static int	count;
	
	count = 0;
	if (n >= 10)
		ft_putunbr_n(n / 10, fd);
	count += ft_putchar_n(n % 10 + '0', fd);
	return (count);
}
