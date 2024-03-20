/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:26:56 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/24 22:31:03 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if char is a digit 0-9 */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	i;
	int	out;
	i = 2;
	out = ft_isdigit(i);

	printf("%d\n", out);
}*/
