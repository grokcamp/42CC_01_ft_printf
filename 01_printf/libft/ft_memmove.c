/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:08:22 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/11 19:49:04 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MOVES <n> bytes from <src> to <dest> without overwriting <src> */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	csrc = (char *)src;
	cdest = (char *)dest;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i--)
			cdest[i] = csrc[i];
	}
	return (dest);
}
/*
int	main(void)
{
	int	i[10] = {1 ,2 ,3, 4, 5};	
	char	u[12] = "salut";
//	char	in[] = "beeping";
//	char	test[25] = "test";
//	char	*out;
	char	*out2;

	printf("test before fn: %s\n", u);
	ft_memmove(u + 2, u, 5);
	out2 = memmove(u, u + 3, 2);
	printf("test after fn:%s\n", u);
	printf("libfn:%s\n", out2);
	ft_memmove(i+5, i, 5*sizeof(int));
	for(int j = 0; j <10; j++)
		printf("i[%d] = %d\n", j, i[j]);
}*/
