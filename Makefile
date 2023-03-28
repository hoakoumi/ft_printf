# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:08:22 by hoakoumi          #+#    #+#              #
#    Updated: 2022/11/19 14:11:44 by hoakoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS =  ft_printf.c ft_hexam.c ft_hexa.c ft_unsig.c ft_point.c\
		ft_hexam.c ft_putstr.c ft_strlen.c  ft_putnbr.c ft_putchar.c 

OBJ = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJ}
	ar -rc ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all 

