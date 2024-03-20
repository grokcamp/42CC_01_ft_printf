/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:15:02 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/20 13:29:19 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* defining the header file */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* including libft.h and all its includes, plus stdarg for VA */

# include "libft/libft.h"
# include <stdarg.h>

/* buffer size declaration */

# define BUF_SIZE	4096

/* defining an unsigned char as a 'byte' */

typedef	unsigned char	byte;

/* useful strings */

# define	FLAGS		"-0.# +"
# define	NUMBERS		"0123456789"
# define	SPECIFIERS	"cspdiuxX%"
# define	LOWERHEX	"0123456789abcdef"
# define	UPPERHEX	"0123456789ABCDEF"

/* flag struct */

typedef	struct	s_print
{
	va_list	args;
	int	width;
	int	precision;
	int	zero;
	int	dot;
	int	dash;
	int	sign;
	int	is_zero;
	int	percent;
	int	space;
	int	total_len;
}	t_print;
