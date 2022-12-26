# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htouil <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 22:37:34 by htouil            #+#    #+#              #
#    Updated: 2022/12/25 22:37:39 by htouil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbruns.c ft_puthexlow.c ft_puthexhigh.c ft_putvoid.c
				
OBJS    = ${SRCS:.c=.o}

NAME    = libftprintf.a

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

RM      = rm -f

.c.o:
	        ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
	        ar rcs ${NAME} ${OBJS}

all:        ${NAME}

clean:      
	        ${RM} ${OBJS}

fclean:     clean 
	        ${RM} ${NAME}

re:         fclean all
