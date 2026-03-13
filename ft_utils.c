#include "ft_printf.h"

// ------------------------------
// Печать одного символа
int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

// ------------------------------
// Печать строки
int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}

// ------------------------------
// Печать целого числа со знаком
int	ft_print_int(int n)
{
	char	buffer[12];
	long	num;
	int		i;
	int		start;
	int		j;

	i = 0;
	num = n;
	if (num == 0)
		return (write(1, "0", 1));
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		i++;
	}
	start = i;
	while (num)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	j = i - 1;
	while (j >= start)
	{
		write(1, &buffer[j], 1);
		j--;
	}
	return (i);
}

// ------------------------------
// Печать беззнакового числа
int	ft_print_unsigned(unsigned int n)
{
	char	buffer[11];
	int		i;
	int		j;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &buffer[j], 1);
		j--;
	}
	return (i);
}

// ------------------------------
// Печать числа в шестнадцатеричном виде
int	ft_print_hex(unsigned int n, char spec)
{
	char	*base;
	char	buffer[9];
	int		i;
	int		j;

	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n)
	{
		buffer[i++] = base[n % 16];
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &buffer[j], 1);
		j--;
	}
	return (i);
}

// ------------------------------
// Печать процента
int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

// ------------------------------
// Вспомогательная: печать unsigned long в hex (для указателей)
int	ft_print_hex_ulong(unsigned long n)
{
	char	*base;
	char	buffer[17];
	int		i;
	int		j;

	base = "0123456789abcdef";
	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n)
	{
		buffer[i++] = base[n % 16];
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
		write(1, &buffer[j--], 1);
	return (i);
}

// ------------------------------
// Печать указателя
int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	addr = (unsigned long)ptr;
	count = write(1, "0x", 2);
	count += ft_print_hex_ulong(addr);
	return (count);
}
