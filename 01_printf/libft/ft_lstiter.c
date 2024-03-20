/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 23:58:58 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/23 00:17:35 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstiter` iterates over the list <lst> and applies the function <f>
 * to the content of all elements within. We use a temp here so the 
 * address to the first node of <lst> doesn't change, merely the contents
 * of those addreses. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ticker;

	ticker = lst;
	while (ticker)
	{
		f(ticker->content);
		ticker = ticker->next;
	}
}
/*
static void	lstprint(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
}

static void	ft_upper(void *x)
{
	char	*c = (char *)x;
	int	i = 0;

	while (c[i])
	{
		if ('a' <= c[i] && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
}

int	main(void)
{
	char	*h = strdup("hello ");
	char	*w = strdup("world");
	t_list	*l1 = ft_lstnew(h);
	t_list	*l2 = ft_lstnew(w);
	ft_lstadd_back(&l1, l2);
	printf("The first element is: %s", h);
	printf("The second element is: %s", w);
	printf("The combined list contains: \n");
	lstprint(l1);
	ft_lstiter(l1, ft_upper);
	printf("The modified list contains: \n");
	lstprint(l1);
}*/
