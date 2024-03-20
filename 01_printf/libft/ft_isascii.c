/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:49:00 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:45:10 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if char is ascii-valid */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;
	int	out;
	
	a = 'あ';
	out = ft_isascii(a);

	printf("%d\n", out);
}*/
