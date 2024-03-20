/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:41:56 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:43:37 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns a pointer to FIRST character <c> within string <s>
 * only searches <n> chars within <s> */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;
	size_t			i;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	b = 'e';
	unsigned char	test[] = "test";
	unsigned char	*out;

	out = ft_memchr(test, b, 2);

	printf("%s\n", out);
}*/
