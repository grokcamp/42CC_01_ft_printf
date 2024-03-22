/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:29:51 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/20 13:56:58 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	int	count;
	int	i;
	va_list	ap;
	char	initial;

	count = 0;
	i = 0;
	va_start(ap, format);
	if (!format)
		ft_putstr("(null)");
	if (format[i] == '%')
	{
		initial = (char *)format;
		if (format[++i])
			count += ft_parse((char *)&format[i], ap);
		while (format[i] && !ft_strchr(SPECIFIERS, format[i]))
			i++;
		if (!format[i])
			format = initial;
	}
	else
		count += ft_putchar_fd(format[i], 1);
	if (format[i])
		i++;
	va_end(ap);
	return (count);
}

int	ft_print_format(t_format f, va_list ap)
{
	int	count;

	count = 0;

	if (f.specifier == 'c' || f.specifier == '%')
		count = ft_print_char(f, ap);
	if (f.specifier == 's')
		count = ft_print_str(f, ap);
	if (f.specifier == 'd' |\ f.specifier == 'i' || f.specifier == 'u')
		count = ft_print_digit(f, ap);
	if (f.specifier == 'x' || f.specifier == 'X')
		count = ft_print_hex(f, ap);
	if (f.specifier == 'p')
		count = ft_print_ptr(f, ap);
	return (count);
}


/*

int	ft_printf(const char *str, ...)
{
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initializer(tab);
	va_start(tab->args, str);
	i = -1;
	ret = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			i = ft_formeval(tab, str, i + 1);
		else
			ret += write(1, &str[i], 1);
	}
	va_end(tab->args);
	ret += tab->t1;
	free (tab);
	return (ret);
}

t_print	*initializer(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->percent = 0;
	tab->space = 0;
	tab->total_len = 0;
	return (tab);
}
*/