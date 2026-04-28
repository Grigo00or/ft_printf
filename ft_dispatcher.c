/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:49:22 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:49:24 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatcher(char c, va_list argc)
{
	if (c == 'c')
		return (ft_print_char(va_arg(argc, int)));
	if (c == 's')
		return (ft_print_str(va_arg(argc, char *)));
	if (c == 'p')
		return (ft_print_ptr(va_arg(argc, void *)));
	if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(argc, int)));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(argc, unsigned int)));
	if (c == 'x')
		return (ft_print_hex(va_arg(argc, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_print_hex(va_arg(argc, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_print_percent());
	return (0);
}
