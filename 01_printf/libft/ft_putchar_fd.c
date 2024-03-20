/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:24:31 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/19 19:45:22 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `putchar_fd` is an example teaching how to use `write`'s first
 * parameter (int fd, const void buf[.count], size_t count), the file
 * descriptor -- fd here refers to a file in the local directory, and
 * in our test main, we've told it to create "testout.txt" with O_CREAT
 * and O_WRONLY means write-only. When the test main is run, it will
 * create "testout.txt" and write <hw> one character at a time, iterating
 * on the <i> index with `i++`; don't forget to close the file with close()! */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	filedesc = open("testout.txt", O_WRONLY | O_CREAT, 0644);
	char	hw[] = "Hello world";
	int	i = 0;

	if (filedesc == -1)
	{
		perror("Error opening file");
		return (1);
	}
	while (hw[i])
	{
		ft_putchar_fd(hw[i], filedesc);
		i++;
	}
	close(filedesc);
	return (0);
}*/
