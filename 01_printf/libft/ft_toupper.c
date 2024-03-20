/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:28:54 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 20:01:35 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts lowercase char <c> to uppercase char <c>
 * returns <c> regardless of change */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char	a;
	char	out;

	a = 'a';
	out = ft_toupper(a);

	printf("%c\n", out);
}*/
