/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:25:41 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/22 23:49:56 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ticker;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		ticker = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ticker;
	}
	free(*lst);
	*lst = NULL;
}
/*
static void     printlst(t_list *lst)
{
        t_list  *tmp = lst;

        while (tmp)
        {
                printf("%s", (char *)tmp->content);
                tmp = tmp->next;
        }
}
static void     wipe(void *content)
{
        free(content);
}
int     main(void)
{
        char    *h = strdup("hello");
        char    *w = strdup(" world");
        t_list  *l1 = ft_lstnew(h);
        printf("The first element is: \"%s\"\n", h);
        printf("The second element is: \"%s\"\n", w);
        t_list  *l2 = ft_lstnew(w);
        ft_lstadd_back(&l1, l2);
        printf("The combined list is: \"");
        printlst(l1);
        printf("\"\n");
        ft_lstclear(&l1, wipe);
        printf("The post-deletion list is: \"");
        printlst(l1);
	printf("\"\n");
}
*/
/*
int     main(void)
{
        char    *hw = strdup("hello world");

        t_list  *l1 = ft_lstnew(hw);
        printf("%s\n", (char *)l1->content);
//      printlst(l1);
        ft_lstdelone(l1, &wipe);
//      printlst(l1);
}*/
