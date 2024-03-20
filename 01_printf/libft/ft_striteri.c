/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:46:10 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/22 23:00:37 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
static void	ft_lower(unsigned int i, char *c)
{
	while (c[i])
	{
		if ('A' <= c[i] && c[i] <= 'Z')
			c[i] += 32;
		i++;
	}
}

int	main(void)
{
	char	*str = strdup("HELLO WORLD");

	printf("Original string was: %s\n", str);
	ft_striteri(str, ft_lower);
	printf("Output string is: %s\n", str);
}*/
