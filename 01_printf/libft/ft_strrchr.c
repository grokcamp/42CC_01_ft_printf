/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:56:47 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/24 22:55:20 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* finds the LAST instance of char <c> in str <s>
 * returns the char <c> where it was found in <s> */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	a = (char)c;
	i = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	int	i;

	str = "stringaling";
	i = 'i';

	printf("%s\n", ft_strrchr(str, i));
}*/
