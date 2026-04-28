/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:53:16 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:53:23 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int i)
{
	int		len;
	char	c;

	len = 0;
	if (i >= 10)
	{
		len += ft_print_unsigned(i / 10);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
	len++;
	return (len);
}
