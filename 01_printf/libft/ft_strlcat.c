/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:48:38 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:54:34 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* appends <size> chars from str <src> to the end of str <dst> 
 * returns the sum of the attempted copy <dst> + <src[size]> */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		dstlen = size;
	if (dstlen == size)
		return (dstlen + srclen);
	if (size > dstlen + srclen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}
/*
int	main(void)
{
	size_t	i;
	char	dest[20];
	const char	sauce[] = "testing";
	i = ft_strlen(sauce);
	strcpy(dest, "just ");
	printf("Append source was: %s\n", sauce);
	printf("Destination was: %s\n", dest);
	printf("Attempted copy length was: %ld\n", ft_strlcat(dest, sauce, 13));
	ft_strlcat(dest, sauce, i);
	printf("Concatenated string is: %s\n", dest);
}*/
