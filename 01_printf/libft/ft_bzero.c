/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:18:25 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:10 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sets memory to null for n bytes */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char	test[] = "testing";
	void	*mem;

	mem = &test[2];
	ft_bzero(mem, 4);
	printf("%s\n", test);
	return (0);
}*/
