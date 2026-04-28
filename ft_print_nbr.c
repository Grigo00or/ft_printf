/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:50:55 by grgrigor          #+#    #+#             */
/*   Updated: 2026/04/22 17:50:57 by grgrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int i)
{
	int		len;
	long	num;

	num = i;
	len = 0;
	if (num < 0)
	{
		num = -num;
		len += ft_putchar_count('-');
	}
	if (num >= 10)
	{
		len += ft_print_nbr(num / 10);
	}
	len += ft_putchar_count((num % 10) + '0');
	return (len);
}

/*int	main(void)
{
	ft_print_nbr(123);
		ft_print_nbr(-2147483648);
			ft_print_nbr(2147483647);
				ft_print_nbr('A');
}
*/
