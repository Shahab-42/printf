# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:50:07 by smuhamma          #+#    #+#              #
#    Updated: 2022/12/15 13:35:39 by smuhamma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c\
		print_hexacap.c print_hexalow.c print_pointer.c print_unint.c\
		ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
	@$(RM) $(OBJS) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all



