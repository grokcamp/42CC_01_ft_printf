/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:06:18 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/23 22:47:39 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstadd_back` operates in an inverse fashion to `lstadd_front`: it adds a
 * new element to the END of linked list <lst>. we can use `lstlast` to find
 * the terminal element quickly, where <final> will take the pointer to the
 * last element; if <final> is NULL, the list is empty, so we simply start
 * the list with <new>  */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	final = ft_lstlast(*lst);
	if (!final)
		*lst = new;
	else
		final->next = new;
}
/*
static void     printlst(t_list *lst)
{
        while (lst)
        {
                printf("%s", (char *)lst->content);
                lst = lst->next;
        }
}
int	main(void)
{
	char	*s1 = strdup("hello world");

	t_list	*l1 = NULL;
	t_list	*l2 = ft_lstnew(s1);
	ft_lstadd_back(&l1, l2);
	printlst(l1);
}
*/
/*
int     main(void)
{
        char    s1[] = "gal-o ";
        char    s2[] = "yeah. ";
        char    s3[] = "sengen.";
        t_list  *l1 = ft_lstnew(s1);
        t_list  *l2 = ft_lstnew(s2);
        t_list  *l3 = ft_lstnew(s3);
        printf("The three strings to be linked are: \n%s\n%s\n%s\n", s1, s2, s3);
	printf("The second  element, \"%s\" should come before \"%s\", ", s2, s1);
	printf("and the third element, \"%s\" should come after \"%s\".\n", s3, s1);
        ft_lstadd_front(&l1, l2);
        ft_lstadd_back(&l1, l3);
        printf("The combined list is: \"");
        printlst(l1);
	printf("\"\n");
	ft
}*/
