# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 15:58:25 by dda-silv          #+#    #+#              #
#    Updated: 2021/01/12 10:37:58 by dda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c			\
			ft_bzero.c			\
			ft_memcpy.c			\
			ft_memccpy.c		\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_strlen.c			\
			ft_strlcpy.c		\
			ft_strlcat.c		\
			ft_strchr.c			\
			ft_strrchr.c		\
			ft_strnstr.c		\
			ft_strncmp.c		\
			ft_atoi.c			\
			ft_isalpha.c		\
			ft_isdigit.c		\
			ft_isalnum.c		\
			ft_isascii.c		\
			ft_isprint.c		\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_calloc.c			\
			ft_strdup.c			\
			ft_substr.c			\
			ft_strjoin.c		\
			ft_strtrim.c		\
			ft_split.c			\
			ft_itoa.c			\
			ft_strmapi.c		\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\

OBJS	= ${SRCS:.c=.o}

BONUS	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_putchar.c		\
			ft_abs.c			\
			ft_convert_base.c	\
			ft_fabs.c			\
			ft_ftoa.c			\
			ft_is_even.c		\
			ft_isspace.c		\
			ft_power.c			\
			ft_putnbr.c			\
			ft_putstr.c			\
			ft_realloc.c		\
			ft_remainder.c		\
			ft_round.c			\
			ft_sqrt.c			\
			ft_str_is_alpha.c	\
			ft_str_is_lowercase.c	\
			ft_str_is_numeric.c		\
			ft_str_is_printable.c	\
			ft_str_is_uppercase.c	\
			ft_strcapitalize.c		\
			ft_strcat.c				\
			ft_strchr_freq.c		\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strlowcase.c			\
			ft_strncat.c			\
			ft_strncpy.c			\
			ft_strstr.c				\
			ft_strupcase.c			\


BONUS_OBJS	= ${BONUS:.c=.o}

NAME	= libft.a

CC		= gcc
ARRC	= ar rcs
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.

$(NAME):	${OBJS}
			${ARRC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:	${OBJS} ${BONUS_OBJS}
			${ARRC} ${NAME} ${OBJS} ${BONUS_OBJS}

so:
		$(CC) -fPIC -c $(CFLAGS) $(SRCS)
		gcc -shared -o libft.so $(OBJS) $(BONUS_OBJS)

normH:
			~/.norminette/norminette.rb *.h

normC:
			~/.norminette/norminette.rb *.c