/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:21:20 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 19:13:57 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

static void	ft_putptr(unsigned long int nbr);

int	ft_print_ptr(t_format parse_me, va_list ap)
{
	long	nbr;
	int		count;

	(void)parse_me;
	nbr = (unsigned long int)va_arg(ap, void *);
	if (!nbr)
		return (ft_putstr_counter("(nil)", 1));
	count = (ft_ulen(nbr, 16) + 2);
	ft_putstr_counter("0x", 1);
	ft_putptr(nbr);
	return (count);
}

static void	ft_putptr(unsigned long int nbr)
{
	if (nbr < 16)
		ft_putchar_counter(HEX_LOWER[nbr], 1);
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16);
		ft_putchar_counter(HEX_LOWER[nbr % 16], 1);
	}
}
