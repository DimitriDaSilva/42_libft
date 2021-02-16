# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 10:08:28 by dda-silv          #+#    #+#              #
#    Updated: 2021/02/16 10:08:28 by dda-silv         ###   ########.fr        #
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
			ft_putchar_bonus.c		\
			ft_abs_bonus.c			\
			ft_convert_base_bonus.c	\
			ft_fabs_bonus.c			\
			ft_ftoa_bonus.c			\
			ft_is_even_bonus.c		\
			ft_isspace_bonus.c		\
			ft_power_bonus.c			\
			ft_putnbr_bonus.c			\
			ft_putstr_bonus.c			\
			ft_realloc_bonus.c		\
			ft_remainder_bonus.c		\
			ft_round_bonus.c			\
			ft_sqrt_bonus.c			\
			ft_str_is_alpha_bonus.c	\
			ft_str_is_lowercase_bonus.c	\
			ft_str_is_numeric_bonus.c		\
			ft_str_is_printable_bonus.c	\
			ft_str_is_uppercase_bonus.c	\
			ft_strcapitalize_bonus.c		\
			ft_strcat_bonus.c				\
			ft_strchr_freq_bonus.c		\
			ft_strcmp_bonus.c				\
			ft_strcpy_bonus.c				\
			ft_strlowcase_bonus.c			\
			ft_strncat_bonus.c			\
			ft_strncpy_bonus.c			\
			ft_strstr_bonus.c				\
			ft_strupcase_bonus.c			\
			get_size_dl_bonus.c			\
			get_size_lg_bonus.c			\

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