/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:39:32 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 19:16:43 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	ft_putchar_counter(char c, int fd)
{
	return ((int)write(fd, &c, 1));
}

int	ft_putstr_counter(char *str, int fd)
{
	if (str)
		return ((int)write(fd, str, ft_strlen(str)));
	return (0);
}

int	ft_ulen(unsigned long int n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		++len;
		n /= base;
	}
	return (len);
}
