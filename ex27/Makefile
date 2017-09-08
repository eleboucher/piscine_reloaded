# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/08 18:58:44 by elebouch          #+#    #+#              #
#    Updated: 2017/09/08 19:06:26 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -Iincludes/
EXEC = ft_display_file

SRC = srcs/display_file.c \
	  srcs/ft_putchar.c

OBJ = $(SRC:.c=.o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	@cc $(CFLAGS) $? -o $(EXEC) 

clean : 
	@rm -f $(OBJ)

fclean : clean
	@rm -rvf $(EXEC)

re : fclean all 

.PHONY: fclean all clean
