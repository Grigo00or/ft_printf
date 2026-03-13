#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
int handle_format(char specifier, va_list args);

int ft_print_char(int c);
int ft_print_str(char *str);
int ft_print_int(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n, char format);
int ft_print_ptr(void *ptr);
int ft_print_percent(void);

#endif
