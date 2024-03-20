/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:48:45 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/24 22:39:27 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates new memory to return <str> and
 * copies str <s> into <str> */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}
/*
int	main(void)
{
	const char	*sauce;
	char	*dest;
	char	*res;

	sauce = "yeah, gal-o sengen";
	dest = ft_strdup(sauce);
	res = strdup(sauce);
	printf("Source was: %s\n", sauce);
	printf("Destination string is: %s\n", dest);
	printf("Stdlib result is: %s\n", res);
}*/
