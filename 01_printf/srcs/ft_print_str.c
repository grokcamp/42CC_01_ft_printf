/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:20:56 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 19:15:19 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_str(t_format form, va_list ap)
{
	char	*str;
	int		count;

	count = 0;
	(void) form;
	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	count = ft_strlen(str);
	ft_putstr_counter(str, 1);
	return (count);
}
