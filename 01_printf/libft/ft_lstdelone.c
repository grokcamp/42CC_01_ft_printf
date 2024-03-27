/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:30:03 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 19:20:52 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstdelone` takes a node as a parameter and frees the memory of the node's
 * content using the fn `del` given as a parameter and frees the node.
 * the memory of <next> must NOT be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	printlst(t_list *lst)
{
	t_list	*tmp = lst;

	while (tmp)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp->next;
	}
}
static void	wipe(void *content)
{
	free(content);
}

int	main(void)
{
	char	*h = strdup("hello");
	char	*w = strdup(" world");
//	char	h[] = "hello";
//	char	w[] = "world";
	printf("The first element is: \"%s\"\n", h);
	printf("The second element is: \"%s\"\n", w);
	t_list	*l1 = ft_lstnew(h);
	t_list	*l2 = ft_lstnew(w);
	ft_lstadd_back(&l1, l2);
	printf("The combined list is: \"");
	printlst(l1);
	printf("\"\n");
	printf("The element to be removed is: \"");
	printlst(l2);
	printf("\"\n");
	ft_lstdelone(l2, wipe);
	printf("The post-deletion list is: \"%s\"\n", (char *)l1->content);
}
*/
/*
int	main(void)
{
	char	*hw = strdup("hello world");

	t_list	*l1 = ft_lstnew(hw);
	printf("%s\n", (char *)l1->content);
//	printlst(l1);
	ft_lstdelone(l1, &wipe);
//	printlst(l1);
}*/
