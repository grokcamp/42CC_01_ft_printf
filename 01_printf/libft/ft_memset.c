/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 01:34:14 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:50:12 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sets <n> bytes in address <s> to <c> */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	char			*str;
	size_t			i;

	a = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	in;
	char	test[] = "testing";
	void	*mem;
	char	*out;

	in = 'a';
	mem = test;
	out = ft_memset(mem, in, 4);
	printf("%s\n", out);
}*/
