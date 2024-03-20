/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:15:16 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:58:21 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* finds str <little> in the first <len> chars of str <big>
 * returns a ptr to the start of <little> in <big> */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!little || little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[n])
		{
			while (big[i + n] == little[n] && i + n < len)
			{
				if (little[n + 1] == '\0')
					return ((char *)&big[i]);
				n++;
			}
			n = 0;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	largestring[] = "testing";
	const char	smallstring[] = "sting";
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%s\n", ptr);
	return (0);
}*/
