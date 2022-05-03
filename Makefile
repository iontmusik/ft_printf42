# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 14:57:45 by jtorre-s          #+#    #+#              #
#    Updated: 2022/04/19 17:49:16 by jtorre-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_hexa.c ft_printf.c ft_putchar.c ft_number.c ft_number_un.c ft_ptr.c \
		ft_string.c ft_variables.c \
		
OBJ = $(SRC:.c=.o)

CFLAGS =  -Wall -Wextra -Werror -I.

NAME = libftprintf.a

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
		
all : $(NAME)

clean:
		/bin/rm -f $(OBJ)
	
fclean: clean
		/bin/rm -f $(NAME)
		
re: fclean all

.PHONY: all clean dclean re