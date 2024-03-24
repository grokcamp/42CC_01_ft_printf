/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:21:44 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/22 17:21:45 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int      ft_puthex(unsigned long int n, t_format form);
static int      ft_hash(t_format form);

int         ft_print_hex(t_format form, va_list ap)
{
    unsigned long int   n;
    int                 count;
    char                *set;

    n = va_arg(ap, unsigned long int);
    if (n == 0)
        return(ft_putchar_counter('0', 1));
    count = ft_hash(form);
    count += ft_ulen(n, 16);
    ft_puthex(n, form);
    return (count);
}

static int  ft_puthex(unsigned long int n, t_format form)
{
    char    *set;
    int     count;

    count = 0;
    if (form.specifier == 'x')
        set = HEX_LOWER;
    if (form.specifier == 'X')
        set = HEX_UPPER;
    if (n < 16)
        count += ft_putchar_counter(set[n], 1);
    if (n >= 16)
    {
        ft_puthex((n / 16), form);
        count += ft_putchar_counter(set[n % 16], 1);
    }
    return (count);
}

static int  ft_hash(t_format form)
{
    int     count;

    count = 0;
    if (form.hash == 1 && form.specifier == 'x')
        count += ft_putstr_counter("0x", 1);
    if (form.hash == 1 && form.specifier == 'X')
        count += ft_putstr_counter("0X", 1);
    return (count);
}