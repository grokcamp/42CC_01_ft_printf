/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:46:07 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/19 19:52:12 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `putstr_fd` is almost identical to the prior `putchar_fd`, but rather
 * than creating our `i++`; loop in the test main to print "hello world"
 * to a file, `putstr` handles the loop internally until the string is
 * written to <fd>. Same as prior, but with different names/vars, the
 * test main opens or creates "hw.txt" if it doesn't exist, writes
 * <hw> to the file, and closes it after hw[i] == '/0'. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
#include <fcntl.h>
int	main(void)
{
	int	file = open("hw.txt", O_WRONLY | O_CREAT, 0644);
	char	hw[] = "hello world";

	if (file == -1)
	{
		perror("Error opening file\n");
		return (1);
	}
	ft_putstr_fd(hw, file);
	close(file);
	return (0);
}*/
