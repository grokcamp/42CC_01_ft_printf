/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:10:14 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/18 21:52:19 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `itoa` converts int <n> to a string on output; the
 * static `intlen` first checks to see how many digits
 * are in <n>, adding one for the '-' if applicable, so
 * that malloc can allocate appropriate space for the
 * output string */

#include "libft.h"

static unsigned int	ft_intlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len += 1;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*str;

	len = ft_intlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = '0' + (num % 10);
		num /= 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	long	i = -42;

	printf("%s\n", ft_itoa(i));
}*/
