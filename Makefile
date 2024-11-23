# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 20:40:58 by vsoares-          #+#    #+#              #
#    Updated: 2024/11/23 16:54:26 by vsoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -O3

RM = rm -f
AR = ar rcs

SRCS = ft_printf.c libftP/ft_strlen.c \
		libftP/lprint_chr.c libftP/lprint_str.c libftP/lprint_dig.c \
		libftP/lprint_hex.c libftP/lprint_ptr.c \

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re