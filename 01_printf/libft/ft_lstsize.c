/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:50:14 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/21 20:34:03 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstsize` counts the number of nodes in a list, similar to `strlen`;
 * we use <ticker> so we don't modify the original <lst> parameter itself,
 * and <ticker> is a pointer so we can track until NULL with `while()`. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ticker;
	int		count;

	ticker = lst;
	count = 0;
	while (ticker)
	{
		ticker = ticker->next;
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	char	h[] = "hello";
	char	w[] = "world";
	t_list	*lst = ft_lstnew(w);
	t_list	*new = ft_lstnew(h);
	ft_lstadd_front(&lst, new);
	printf("The number of nodes in the list is: %d\n", ft_lstsize(lst));
}*/
