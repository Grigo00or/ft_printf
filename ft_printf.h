/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:50:16 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:50:20 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_dispatcher(char c, va_list args);
int	ft_putchar_count(char c);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_percent(void);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned long n, char *base);
int	ft_print_ptr(void *ptr);

#endif
