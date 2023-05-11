# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:34:27 by dkurcbar          #+#    #+#              #
#    Updated: 2023/05/11 15:29:47 by dkurcbar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	:=	libft.a
HEADER	:=	libft.h
SRCS	:=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_atoi.c

OBJS	:=	${SRCS:.c=.o}
CC		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra 
AR		:=	ar rcs
INCLUDE	:=	libft.h Makefile
RM		:=	rm -f
MODE	:=	normal

ifeq ($(MODE),debug)
	CFLAGS	+=	-g
endif


all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o: %.c ${INCLUDE}
	${CC} -c ${CFLAGS} $< -o $@ 
clean:	
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
