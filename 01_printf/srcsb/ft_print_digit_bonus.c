/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:21:35 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 18:40:10 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

static char	*ft_uitoa(unsigned int n);
static int	ft_putunbr(unsigned int n);
static int	ft_diflags(t_format form, int n);

int	ft_print_digit(t_format parse_me, va_list ap)
{
	char			*nbr;
	unsigned int	unbr;
	int				count;
	int				n;

	if (parse_me.specifier == 'd' || parse_me.specifier == 'i')
	{
		n = va_arg(ap, int);
		count = ft_diflags(parse_me, n);
		nbr = ft_itoa(n);
		count += ft_putstr_counter(nbr, 1);
		free(nbr);
	}
	else
	{
	unbr = va_arg(ap, unsigned int);
	count = ft_putunbr(unbr);
	}
	return (count);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_ulen((unsigned long int)n, 10);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

static int	ft_putunbr(unsigned int n)
{
	char	*str;
	int		count;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		str = ft_uitoa(n);
		count += ft_putstr_counter(str, 1);
		free(str);
	}
	return (count);
}

static int	ft_diflags(t_format form, int n)
{
	int	count;

	count = 0;
	if (form.plus == 1 && n >= 0)
		count += ft_putchar_counter('+', 1);
	if (form.plus == 0 && form.space == 1 && n >= 0)
		count += ft_putchar_counter(' ', 1);
	return (count);
}
