/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:51:43 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:51:45 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		return (ft_print_str("(nil)"));
	}
	len += ft_print_str("0x");
	len += ft_print_hex((unsigned long)ptr, "0123456789abcdef");
	return (len);
}
