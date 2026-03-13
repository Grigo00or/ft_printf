#include "ft_printf.h"

int handle_format(char specifier, va_list args)
{
    if (specifier == 'c')
        return (ft_print_char(va_arg(args, int)));
    else if (specifier == 's')
        return (ft_print_str(va_arg(args, char *)));
    else if (specifier == 'd' || specifier == 'i')
        return (ft_print_int(va_arg(args, int)));
    else if (specifier == 'u')
        return (ft_print_unsigned(va_arg(args, unsigned int)));
    else if (specifier == 'x' || specifier == 'X')
        return (ft_print_hex(va_arg(args, unsigned int), specifier));
    else if (specifier == 'p')
        return (ft_print_ptr(va_arg(args, void *)));
    else if (specifier == '%')
        return (ft_print_percent());
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            count += handle_format(format[i], args);
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }
    va_end(args);
    return (count);
}
/*
int main(void)
{
    int n = 42;

    ft_printf("char: %c\n", 'A');
    ft_printf("str: %s\n", "hello");
    ft_printf("int: %d\n", -42);
    ft_printf("unsigned: %u\n", 42);
    ft_printf("hex: %x\n", 255);
    ft_printf("HEX: %X\n", 255);
    ft_printf("ptr: %p\n", &n);
    ft_printf("percent: %%\n");
}*/
