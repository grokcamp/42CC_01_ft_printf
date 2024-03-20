/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:29:09 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/24 22:50:30 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* finds first <c> in str <s> and returns a ptr to <c> */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == a)
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	char	*s;
	int	i;

	s = "stringaling";
	i = 'i';

	printf("%s\n", ft_strchr(s, i));
}*/
