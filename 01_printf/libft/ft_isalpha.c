/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:25:03 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:49 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if char is alphabetical */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;
	int	output;
	a = ' ';
	output = ft_isalpha(a);

	printf("%d\n", output);
}*/
