# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:34:27 by dkurcbar          #+#    #+#              #
#    Updated: 2023/06/12 13:59:06 by dkurcbar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	:=	.main
HEADER	:=	libft.h
SRCS	:=	main_atoi.c main_calloc.c main_itoa.c main_memchr.c main_split.c \
			main_strdup.c main_strjoin.c main_strlcat.c main_strncmp.c \
			main_strnstr.c main_strrchr.c main_strtrim.c main_substr.c 
			
OBJS	:=	${SRCS:.c=.o}
CC		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra
INCLUDE	:=	Makefile
RM		:=	rm -f
MODE	:=	normal

ifeq ($(MODE),debug)
	CFLAGS	+=	-g
endif

all: ${NAME}

${NAME}: ${OBJS}
	@touch ${NAME} $^  && echo "All mains created/upgrade"

%.o: %.c ${INCLUDE}
	@${CC} -I../ -L../ -lft   $< -o $(patsubst main_%.c,%.o,$<) && echo "Compiled: $< -> $(patsubst main_%.c,%.o,$<)"


clean:	
	@${RM} $(filter-out $(wildcard main_*.o), $(wildcard *.o))
	@${RM} -r *.dSYM
	@echo "Compiled files deleted."
#
#	@$(foreach obj,${OBJS},echo "File deleted: ${obj}";)

fclean:	clean
	@${RM} ${NAME}
	@$(foreach obj,${NAME},echo "File deleted: $(obj)";)

re:	fclean all

.PHONY: all clean fclean re
