/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:39:05 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/21 21:05:00 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstlast` returns the last node of the list <lst> passed as a parameter;
 * for this, an implementation similar to `lstsize` should suffice, but
 * rather than returning the <counter> int, we return the tmp <ticker>
 * list pointer. the crucial difference is in the `while()` loop: we
 * loop while a <next> DOES exist, otherwise we'd return NULL every time. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ticker;

	if (!lst)
		return (NULL);
	ticker = lst;
	while (ticker->next)
		ticker = ticker->next;
	return (ticker);
}

/*
static void	printlst(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	char	s1[] = "sengen.";
	char	s2[] = "gal-o ";
	char	s3[] = "yeah. ";
	t_list	*l1 = ft_lstnew(s1);
	t_list	*l2 = ft_lstnew(s2);
	t_list	*l3 = ft_lstnew(s3);
	printf("The three strings to be linked are: \n%s\n%s\n%s\n", s1, s2, s3);
	ft_lstadd_front(&l1, l2);
	ft_lstadd_front(&l1, l3);
	printf("The combined list is: ");
	printlst(l1);
	printf("The last element in the list is: ");
	t_list	*final = ft_lstlast(l1);
	printlst(final);
}*/
