/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:21:56 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:56:41 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calculates and returns the length of str <s> */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s;
	size_t	out;

	s = "string";
	out = ft_strlen(str);

	printf("%d\n", out);
}*/
