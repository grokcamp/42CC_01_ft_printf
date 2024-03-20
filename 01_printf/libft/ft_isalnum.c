/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:42:37 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:36 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if char is alphanumeric */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;
	int	out;
	a = 'q';
	out = ft_isalnum(a);

	printf("%d\n", out);

}*/
