# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acazorla <acazorla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 08:44:54 by acazorla          #+#    #+#              #
#    Updated: 2024/11/04 11:26:39 by acazorla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MY_SOURCES =ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

B_SOURCES =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS	= $(MY_SOURCES:.c=.o)
OBJS_B	= $(B_SOURCES:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

$(NAME) : ${OBJS}
	${LIBC} $(NAME) $(OBJS)
	
.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

all : $(NAME)

bonus : $(NAME) $(OBJS_B)
	${LIBC} $(NAME) $(OBJS_B)

fclean : clean
	$(RM) $(NAME) $(bonus)

clean :
	$(RM) -f $(OBJS) $(OBJS_B)

re : fclean all

.PHONY : all bonus clean fclean re .c.o