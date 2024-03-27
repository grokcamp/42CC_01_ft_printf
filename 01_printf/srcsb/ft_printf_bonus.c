/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:29:51 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 18:44:52 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(++format))
				count += ft_parser((char *)format, ap);
			while (*format && !ft_strchr(SPECIFIERS, *format))
				++format;
			if (!(*format))
				format -= 1;
		}
		else
			count += ft_putchar_counter(*format, 1);
		if (*format)
			++format;
	}
	va_end(ap);
	return (count);
}

/* reduced by one line by using pointer arithmetic instead of a temp var
int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	char	*init_spec;

	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			init_spec = (char *)format;
			if (*(++format))
				count += ft_parser((char *)format, ap);
			while (*format && !ft_strchr(SPECIFIERS, *format))
				++format;
			if (!(*format))
				format = init_spec;
		}
		else
			count += ft_putchar_counter(*format, 1);
		if (*format)
			++format;
	}
	va_end(ap);
	return (count);
}
*/
t_format	ft_init(void)
{
	t_format	form;

	form.specifier = 0;
	form.hash = 0;
	form.space = 0;
	form.plus = 0;
	return (form);
}

int	ft_printmaster(t_format parse_me, va_list ap)
{
	int	count;

	count = 0;
	if (parse_me.specifier == 'c' || parse_me.specifier == '%')
		count = ft_print_char(parse_me, ap);
	else if (parse_me.specifier == 's')
		count = ft_print_str(parse_me, ap);
	else if (parse_me.specifier == 'p')
		count = ft_print_ptr(parse_me, ap);
	else if (parse_me.specifier == 'd' || parse_me.specifier == 'i'
		|| parse_me.specifier == 'u')
		count = ft_print_digit(parse_me, ap);
	else if (parse_me.specifier == 'x' || parse_me.specifier == 'X')
		count = ft_print_hex(parse_me, ap);
	return (count);
}
