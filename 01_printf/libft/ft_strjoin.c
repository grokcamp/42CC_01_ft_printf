/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:40:31 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/14 21:00:59 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc and returns a new str, which is
 * <s1> + <s2> concatenated -- NULL if alloc fails */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	char	*out;

	i = 0;
	n = 0;
	out = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!out)
		return (0);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		out[i + n] = s2[n];
		n++;
	}
	out[i + n] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	*a = "hello ";
	char	*b = "world";

	printf("String A was: %s\n", a);
	printf("String B was: %s\n", b);
	printf("Output is: %s\n", ft_strjoin(a, b));
}*/
