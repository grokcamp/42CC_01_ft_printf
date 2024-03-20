/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:39:32 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/20 13:51:59 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* boolean strchr */

int	in(const char *s, char c)
{
	if (NULL == s)
		return (1);
	while (*s)
	{
		if (*s == c)
			return (0);
		++s;
	}
	return (1);
}

int	ft_formeval(t_print *tab, int format, int pos)
{
	while (not cspdiuxX%)
	{
		if (format[pos] == '.')
		{
			tab->dot = 1;
			pos++;
		}
		if (format[pos] == '-')
		{
			tab->dash = 1;
			pos++;
		}
	}
}
