/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:32:34 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/23 22:32:09 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstadd_front` adds the node <new> at the beginning of the list.
 * <lst> is the address of a pointer to the first link of a list.
 * <new> is the address of a pointer to the node to be added.
 * the first line sets the new element's address to point to the
 * start of the existing list; the second line sets the *existing*
 * list pointer to point to the <new> (FIRST) element, as we recall
 * a pointer points to the START of an address */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
static void	printlst(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	char	str1[] = "world";
	char	str2[] = "hello";

	t_list	*lst = ft_lstnew(str1);
	printf("The original list was: \n");
	printlst(lst);
	printf("The modified list is: \n");
	t_list	*new = ft_lstnew(str2);
	ft_lstadd_front(&lst, new);
	printlst(lst);
}*/
