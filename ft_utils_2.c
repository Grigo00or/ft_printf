#include "ft_printf.h"

int	ft_print_int(int n)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num == 0)
		return (count + write(1, "0", 1));
	return (count + ft_putnbr_base((unsigned long)num, "0123456789"));
}

int	ft_print_unsigned(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	return (ft_putnbr_base(n, "0123456789"));
}

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	addr = (unsigned long)ptr;
	count = write(1, "0x", 2);
	if (addr == 0)
		return (count + write(1, "0", 1));
	return (count + ft_putnbr_base(addr, "0123456789abcdef"));
}
