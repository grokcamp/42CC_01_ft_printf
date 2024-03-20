/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:39:47 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/14 21:10:19 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc and returns a copy of <s1> with the chars
 * in <set> removed from the beginning & end of the string 
 *
 * This uses `strchr` until NULL to confirm if s1[i] is in <set>
 * i increments up, n increments down, and we check to ensure they
 * do not overlap with `n > i`, then strlcpy takes the range from
 * i to n starting at s1[i] for the result*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		i = 0;
		n = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[n - 1] && ft_strchr(set, s1[n - 1]) && n > i)
			n--;
		str = (char *)malloc((n - i + 1) * sizeof(char));
		if (str)
			ft_strlcpy(str, &s1[i], n - i + 1);
	}
	return (str);
}
/*
int	main(void)
{
	char const	*mario;
	char const	*check;

	mario = "aabbablet'sa goooobaabbaba";
	check = "ab";
	printf("Original string was: %s\n", mario);
	printf("Set to trim was: %s\n", check);
	printf("Trimmed string is: %s\n", ft_strtrim(mario, check));
}*/
