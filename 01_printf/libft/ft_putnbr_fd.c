/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:08:47 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/19 21:37:08 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the culmination of our `-_fd` exercises, this takes `putnbr` from the
 * piscine curriculum and writes to a file directory rather than the 
 * command line as before. first exclusion is for INT_MIN, as it always
 * screws things up -- I'm still not casting as a long, it's easier for
 * me to write the explicit exclusion this way, and I even bailed myself
 * out during the exam when tasked with `putnbr` by performing a
 * `printf("%d\n", i)`, `i++`, `while (i > 0)` to find INT_MAX and then
 * subtract 1 to write the explicit intmin. Fun little hack I won't forget.
 * That said, `putnbr` calls itself through recursion if n>9 and uses
 * `putchar_fd` to write the remainder through a %10 operation. If n
 * is a single-digit int greater than 0, it simply `putchar`s the int
 * with `+ '0'` as a conversion method. */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
		{
			ft_putchar_fd(n + '0', fd);
		}
	}
}

/* Tell me if you recognize these numbers
#include <fcntl.h>
int	main(void)
{
	int	file = open("numbers.txt", O_WRONLY | O_CREAT, 0644);

	if (file == -1)
	{
		perror("Error opening file\n");
		return (1);
	}
	ft_putnbr_fd(4, file);
	ft_putchar_fd('\n', file);
	ft_putnbr_fd(8, file);
	ft_putchar_fd('\n', file);
        ft_putnbr_fd(15, file);
	ft_putchar_fd('\n', file);
        ft_putnbr_fd(16, file);
	ft_putchar_fd('\n', file);
        ft_putnbr_fd(23, file);
	ft_putchar_fd('\n', file);
        ft_putnbr_fd(42, file);
	close(file);
	return (0);
}*/
