# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/08 18:51:39 by elebouch          #+#    #+#              #
#    Updated: 2017/09/08 18:54:48 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -Iincludes/
ARFLAGS = rc

NAME = libft.a

SRCS = ft_putchar.c \
	   ft_putstr.c  \
	   ft_strcmp.c  \
	   ft_strlen.c  \
	   ft_swap.c

DIROBJ = srcs
SRC = $(addprefix $(DIROBJ)/, $(SRCS))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar $(ARFLAGS) $(NAME) $?
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
