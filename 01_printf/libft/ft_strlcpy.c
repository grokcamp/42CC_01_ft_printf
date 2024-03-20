/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:53:29 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/12 16:37:43 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies <size> chars from str <src> into str <dst>
 * returns the length of <src> */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size > srclen + 1)
		ft_memcpy(dst, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	const char	*old;
	int	i = 10;
	char	new[i];
	//size_t	len;

	old = "YEAH. GAL-O SENGEN.";
	//len = ft_strlen(old);
	ft_strlcpy(new, old, i);
	printf("Original string was: %s\n", old);
	printf("Copied string is: %s\n", new);
	printf("Attempted copy length was: %ld\n", ft_strlcpy(new, old, i));
	printf("Space allocated in copy destination was: %d\n", i);
}*/
