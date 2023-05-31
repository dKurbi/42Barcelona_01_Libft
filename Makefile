# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:34:27 by dkurcbar          #+#    #+#              #
#    Updated: 2023/05/31 17:46:15 by dkurcbar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	:=	libft.a
HEADER	:=	libft.h
SRCS	:=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_atoi.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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
