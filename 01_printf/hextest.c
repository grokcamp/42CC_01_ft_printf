/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hextest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:56:48 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 01:44:03 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     ft_putchar_counter(char c, int fd)
{
    return ((int)write(fd, &c, 1));
}

int     ft_putstr_counter(char *str, int fd)
{
    if (str)
        return ((int)write(fd, str, ft_strlen(str)));
    return (0);
}

int     ft_ulen(unsigned long int n, int base)
{
    int len;

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

int	ft_hash(unsigned long int n, char c, int h)
{
	int	count = 0;

	if (n > 0 && c == 'x' && h)
		count += ft_putstr_counter("0x", 1);
	if (n > 0 && c == 'X' && h)
		count += ft_putstr_counter("0X", 1);
	return (count);
}

void	ft_puthex(unsigned long int n, char c)
{
	char	*set;

	if (c = 'x')
		set = "0123456789abcdef";
	if (c = 'X')
		set = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar_counter(set[n], 1);
	if (n >= 16)
	{
		ft_puthex((n / 16), c);
		ft_putchar_counter(set[n % 16], 1);
	}
}

int	main(void)
{
	//int	n = 16777215;
	int	n = 1;
	char	c = 'x';
	int	h = 1;
	int	hash = ft_hash(n, c, h);

	ft_puthex(n, c);
	printf("\nChars processed: %d", (hash + ft_ulen(n, 16)));
	return (0);
}
