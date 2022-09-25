# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chfederi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 20:02:43 by chfederi          #+#    #+#              #
#    Updated: 2021/10/25 20:02:48 by chfederi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME  = libft.a

SRCS  =   ft_atoi.c  ft_isalpha.c  ft_itoa.c\
            ft_memcpy.c  ft_putendl_fd.c  ft_strdup.c\
            ft_strmapi.c ft_tolower.c  ft_bzero.c\
            ft_isascii.c ft_memmove.c  ft_striteri.c\
            ft_putnbr_fd.c ft_strlcat.c  ft_strncmp.c\
            ft_toupper.c ft_calloc.c   ft_isdigit.c\
            ft_memchr.c  ft_memset.c   ft_putstr_fd.c\
            ft_strlcpy.c ft_strnstr.c  ft_isalnum.c\
            ft_isprint.c ft_memcmp.c   ft_putchar_fd.c\
            ft_strchr.c  ft_strlen.c   ft_strrchr.c\
            ft_substr.c  ft_strjoin.c  ft_split.c\
            ft_strtrim.c

HEADER = libft.h

CC   = cc

FLAGS  = -Wextra -Wall -Werror


OBJS  = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all