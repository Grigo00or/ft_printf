#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int	len;
	int	count;

	len = 0;
	while (base[len])
		len++;
	count = 0;
	if (n >= (unsigned long)len)
		count += ft_putnbr_base(n / len, base);
	count += write(1, &base[n % len], 1);
	return (count);
}

int	ft_print_char(int c)
{
	char	ch;

	ch = (char)c;
	return (write(1, &ch, 1));
}

int	ft_print_precent(void)
{
	return (write(1, "%", 1));
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
		i++;
	return (write(1, s, i));
}

int	ft_print_hex(unsigned int n, char spec)
{
	if (n == 0)
		return (write(1, "0", 1));
	if (spec == 'x')
		return (ft_putnbr_base(n, "0123456789abcdef"));
	return (ft_putnbr_base(n, "0123456789ABCDEF"));
}
