/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:05:51 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/22 17:05:54 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int     ft_print_char(t_format form, va_list ap)
{
    char    c;
    int     count;

    count = 0;
    if (form.specifier == 'c')
        c = va_arg(ap, char);
    else
        c = '%';
    count += ft_putchar_counter(c, 1);
    return (count);
}