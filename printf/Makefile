# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 22:36:05 by muilhan           #+#    #+#              #
#    Updated: 2022/12/03 16:22:04 by muilhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = 		ft_coal.c \
			ft_coal2.c \
			ft_printf.c \
			ft_itoa.c 

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re 