/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:22:56 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/22 17:22:58 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static t_format ft_parse_flags(const char *format, t_format parse_me);

int             ft_parser(const char *format, va_list ap)
{
    t_format    parse_me;

    parse_me = ft_parse_flags(format, ft_init());
    while (!ft_strchr(SPECIFIERS, *format))
        format++;
    parse_me.specifier = *format;
    return (ft_printmaster(parse_me, ap));
}

static t_format ft_parse_flags(const char *format, t_format parse_me)
{
    while (!ft_strchr(SPECIFIERS, *format))
    {
        if (*format == '#')
            parse_me.hash = 1;
        if (*format == ' ')
            parse_me.space = 1;
        if (*format == '+')
            parse_me.plus = 1;
        ++format;
    }
    return (parse_me);
}