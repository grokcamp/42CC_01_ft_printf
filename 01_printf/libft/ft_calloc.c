/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:04:32 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/23 23:06:26 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates memory to array of nmemb contents of size bytes */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (nmemb && size && (nmemb * size < size || nmemb * size < nmemb))
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	else
		ft_bzero(tmp, nmemb * size);
	return (tmp);
}
/*
int	main(void)
{
	char	*a = "hello";
	char	*b = (char *)ft_calloc(ft_strlen(a), sizeof(char));
	b = strdup(a);
	printf("%s\n", b);
}*/
