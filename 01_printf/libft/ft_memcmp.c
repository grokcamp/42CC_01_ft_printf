/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:59:09 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:46:43 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compares string <s1> to <s2> and returns the difference s1-s2 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	t1[] = "test";
	unsigned char	t2[] = "tfst";
	int	out;

	out = ft_memcmp(t1, t2, 4);
	printf("%d\n", out);
}*/
