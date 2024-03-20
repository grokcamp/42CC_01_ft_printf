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
