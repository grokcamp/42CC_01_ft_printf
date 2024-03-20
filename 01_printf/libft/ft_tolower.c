/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:36:01 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 20:00:55 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts uppercase char <c> to lowercase char <c>
 * returns <c> regardless of change */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	a;
	char	out;

	a = 'A';
	out = ft_tolower(a);

	printf("%c\n", out);
}*/
