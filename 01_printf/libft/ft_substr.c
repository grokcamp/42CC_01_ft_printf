/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:10:00 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/25 19:06:29 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies a substring starting at index <start> from str <s>
 * into a new memory area (return, <str>) of max size <len> */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	srclen;
	size_t	dexlen;
	char	*str;

	srclen = ft_strlen(s);
	if (!s)
		return (0);
	if (start > srclen)
		return (ft_strdup(""));
	dexlen = ft_strlen(s + start);
	if (len > dexlen)
		len = dexlen;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/*
int	main(void)
{
	char const	*a;
	unsigned int	b;

	a = "yeah, gal-o sengen";
	b = 6;
	printf("Source string: %s\n", a);
	printf("Starting char: %d\n", b);
	printf("Return string: %s\n", ft_substr(a, b, 12));
}*/
