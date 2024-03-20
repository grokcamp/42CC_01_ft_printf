/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:57:19 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/19 20:07:31 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* once again, `putendl_fd` is almost identical to the prior `putstr_fd`,
 * but this time we append an additional newline (\n) after the string.
 * the final write() in the function is outside the loop to ensure we
 * don't print a newline on every incrementation of `i++`, it should
 * only fire once. see prior examples for further details on test main. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	file = open("hwagain.txt", O_WRONLY | O_CREAT, 0644);
	char	hw[] = "hewwo wowwd =uwu=";

	if (file == -1)
	{
		perror("Error opening file\n");
		return (1);
	}
	ft_putendl_fd(hw, file);
	ft_putendl_fd(hw, file);
	close(file);
	return(0);
}*/
