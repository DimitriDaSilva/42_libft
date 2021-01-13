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

SRCS	=  ft_strlen.c				\
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
				ft_strdup.c			\


OBJS	= ${SRCS:.c=.o}

BONUS	= 

BONUS_OBJS	= $(BONUS: .c=.o)

NAME	= libft.a

CC		= gcc
ARRC	= ar rcs
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $^ -o ${<:.c=.o} -I.

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:	${OBJS} ${BONUS_OBJS}
			${ARRC} ${NAME} ${OBJS} ${BONUS_OBJS}

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

normH:
			~/.norminette/norminette.rb -R CheckDefine *.h

normC:
			~/.norminette/norminette.rb -R CheckForbiddenSourceHeader *.c