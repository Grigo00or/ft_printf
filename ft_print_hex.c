/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:50:41 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:50:43 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, char *base)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_print_hex(num / 16, base);
	}
	len += ft_putchar_count(base[num % 16]);
	return (len);
}
