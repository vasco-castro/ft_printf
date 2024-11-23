# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 20:40:58 by vsoares-          #+#    #+#              #
#    Updated: 2024/11/23 22:11:06 by vsoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILER = cc
CFLAGS = -Wall -Werror -Wextra -O3

RM = rm -f
AR = ar rcs

SRCS = ft_printf.c lprint.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@$(AR) $(NAME) $(OBJS)

clean:
	@echo "Cleaning all objects."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@$(RM) $(NAME)
	@$(RM) test

re: fclean all

t: re
	@echo Running main test file.
	@$(COMPILER) $(CFLAGS) main.c $(NAME) -o test
# @./test
# @make fclean

.PHONY: all clean fclean re t