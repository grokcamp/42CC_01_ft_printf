/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:14:55 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:45:39 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if char is a printable char (nonspace/empty) */

#include "libft.h"

int	ft_isprint(int c)
{
	if (31 < c && c < 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	i;
	int	out;

	i = 127;
	out = ft_isprint(i);

	printf("%d\n", out);
}*/
