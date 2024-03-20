/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:53:02 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/22 22:59:59 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `strmapi` applies fn <f> to each char of string <s>, passing
 * its index as first arg to create a new string with malloc, 
 * resulting from successive applications of `f` */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	i = 0;
	out = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (i < ft_strlen(s))
	{
		out[i] = (*f)(i, s[i]);
		i++;
	}
	out[i] = 0;
	return (out);
}
/*
static char	ft_lower(unsigned int i, char c)
{
	(void)i;
	if ('A' <= c && c <= 'Z')
		c+=32;
	return (c);
}

int	main(void)
{
	char	*str = strdup("HELLO WORLD");
	char	*out = ft_strmapi(str, ft_lower);

	printf("Original string was: %s\n", str);
	if (out)
	{
		printf("Result string is: %s\n", out);
		free(out);
	}
	else
		printf("Memory allocation failed\n");
}*/
