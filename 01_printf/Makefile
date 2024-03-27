# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 17:45:58 by gcampbel          #+#    #+#              #
#    Updated: 2024/03/22 17:46:00 by gcampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
BONUS		= libftprintf_bonus.a

LIB_PATH    = ./library
LIBFTPRINTF = ${LIB_PATH}/ft_printf.h
LIBS        = -lftprintf
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC          = cc

FLAGS       = -Wall -Wextra -Werror -g

SRCS        =   srcs/ft_parser.c        \
                srcs/ft_print_char.c    \
                srcs/ft_print_digit.c   \
                srcs/ft_print_hex.c     \
                srcs/ft_print_ptr.c     \
                srcs/ft_print_str.c     \
                srcs/ft_printf.c        \
                srcs/utils.c

BONUS_SRCS  =   srcsb/ft_parser_bonus.c        \
                srcsb/ft_print_char_bonus.c    \
                srcsb/ft_print_digit_bonus.c   \
                srcsb/ft_print_hex_bonus.c     \
                srcsb/ft_print_ptr_bonus.c     \
                srcsb/ft_print_str_bonus.c     \
                srcsb/ft_printf_bonus.c        \
                srcsb/utils_bonus.c				

OBJS        = $(SRCS:.c=.o)

BONUS_OBJS  = $(BONUS_SRCS:.c=.o)


all:        $(NAME)

$(NAME):    $(LIBFT) $(OBJS)
			@cp $(LIBFT) $(NAME)
			@ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@make bonus -C $(LIBFT_DIR)

cleanlib:
	@make fclean -C $(LIBFT_DIR)

relib: cleanlib
	@make bonus -C $(LIBFT_DIR)

%.o: %.c 
		$(CC) $(FLAGS) -c $< -o $@ 

clean:
			@rm -f $(OBJS)
			@rm -f $(BONUS_OBJS)

fclean:     clean cleanlib
			@rm -f $(NAME)

re:         relib fclean all

bonus:   fclean $(LIBFT) $(BONUS_OBJS)
			@cp $(LIBFT) $(NAME)
			@ar rcs $(NAME) $(BONUS_OBJS)

.PHONY:     all clean fclean re bonus
