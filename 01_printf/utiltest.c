/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiltest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:58:32 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 00:56:40 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_ulen(unsigned long n, int base);
char    *ft_uitoa(unsigned int n);


char    *ft_uitoa(unsigned int n)
{
    char    *str;
    int     len;

    len = ft_ulen((unsigned long)n, 10);
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (len)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}

int     ft_ulen(unsigned long n, int base)
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

int	main(void)
{
	unsigned int	un;

	un = 42;
	printf("%s", ft_uitoa(un));
	return (0);
}
