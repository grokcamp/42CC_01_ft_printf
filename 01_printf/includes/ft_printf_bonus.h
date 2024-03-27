/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:15:02 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/25 12:15:04 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* defining the header file */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

/* including libft.h and all its includes, plus stdarg for VA */

//# include "../libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "../libft/libft.h"

/* constants */

# define SPECIFIERS	"cspdiuxX%"
# define HEX_LOWER	"0123456789abcdef"
# define HEX_UPPER	"0123456789ABCDEF"

//  flag struct 

typedef struct s_format
{
	char	specifier;
	int		hash;
	int		space;
	int		plus;
}	t_format;

/* function prototypes */
/* formats and prints input data*/
int			ft_printf(const char *format, ...);
/* specifier and flag parser */
int			ft_parser(const char *format, va_list ap);
/* printing functions */
int			ft_printmaster(t_format parse_me, va_list ap);
int			ft_print_char(t_format parse_me, va_list ap);
int			ft_print_str(t_format parse_me, va_list ap);
int			ft_print_ptr(t_format parse_me, va_list ap);
int			ft_print_digit(t_format parse_me, va_list ap);
int			ft_print_hex(t_format parse_me, va_list ap);
/* utility functions */
int			ft_putchar_counter(char c, int fd);
int			ft_putstr_counter(char *str, int fd);
int			ft_ulen(unsigned long int n, int base);
/* initializes a struct with all members set to 0*/
t_format	ft_init(void);
/* libft utilities 
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_itoa(int n);*/

#endif
