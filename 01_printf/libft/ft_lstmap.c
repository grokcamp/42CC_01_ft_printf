/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 00:18:46 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/24 19:42:58 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstmap` iterates the list <lst> and applies fn <f> on the content of each
 * node, creating a new list resulting from the successive applications of <f>.
 * the <del> fn is used to delete the content of a node if needed. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*box;
	t_list	*stuff;

	if (!lst || !f || !del)
		return (NULL);
	box = NULL;
	while (lst)
	{
		stuff = ft_lstnew((*f)(lst->content));
		if (!stuff)
		{
			ft_lstclear(&box, del);
			return (NULL);
		}
		ft_lstadd_back(&box, stuff);
		lst = lst->next;
	}
	return (box);
}
/*
static void	wipe(void *content)
{
	free(content);
}

static void     lstprint(t_list *lst)
{
        t_list  *tmp;

        tmp = lst;
        while (tmp)
        {
                printf("%s\n", (char *)tmp->content);
                tmp = tmp->next;
        }
}

static void     *ft_upper(void *x)
{
        char    *c = (char *)x;
        int     i = 0;

        while (c[i])
        {
                if ('a' <= c[i] && c[i] <= 'z')
                        c[i] -= 32;
                i++;
        }
	return (x);
}

int     main(void)
{
        char    *h = strdup("hello ");
        char    *w = strdup("world");
        t_list  *l1 = ft_lstnew(h);
        t_list  *l2 = ft_lstnew(w);
        ft_lstadd_back(&l1, l2);
        printf("The first element is: %s\n", h);
        printf("The second element is: %s\n", w);
        printf("The combined list contains: \n");
        lstprint(l1);
        t_list	*new = ft_lstmap(l1, &ft_upper, &wipe);
        printf("The new list contains: \n");
        lstprint(new);
	ft_lstclear(&new, &wipe);
}*/
