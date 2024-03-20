/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:45:51 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:49:27 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies <n> bytes from string <src> to <dest> and returns <dest> */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	in[] = "beep";
	char	test[] = "testing";
	void	*mem;
	char	*out;

	mem = test;
	out = ft_memcpy(mem, in, 4);
	printf("%s\n", out);
}*/
