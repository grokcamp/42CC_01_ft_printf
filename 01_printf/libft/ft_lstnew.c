/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:14:45 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/23 22:37:46 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstnew` creates a new element, allocates with malloc, and returns the
 * new element. the member variable <content> is initialized with the value
 * of the <content> *parameter*. the <next> variablie is initialized to NULL,
 * meaning nothing follows it in the list */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*block;

	block = (t_list *)malloc(sizeof(t_list));
	if (!block)
		return (NULL);
	block->content = content;
	block->next = NULL;
	return (block);
}
/*
int	main(void)
{
	//char	str[] = "hello world";
	t_list	*list = ft_lstnew(NULL);
	//printf("%s\n", (char *)list->content);
}*/
