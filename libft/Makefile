# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 15:55:41 by dshvydka          #+#    #+#              #
#    Updated: 2024/10/31 21:37:46 by dshvydka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I../include

NAME	=	libft.a

RM	=	rm -f

AR	=	ar -rcs

INCLUDE	=	../include
SOURCES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
SRCBONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJECTS	=	$(SOURCES:.c=.o)

OBJ_BONUS = $(SRCBONUS:.c=.o)

# Colors
DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
CYAN = \033[0;96m

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			@$(AR) $(NAME) $(OBJECTS)
			@echo "$(GREEN)libft compiled!$(DEF_COLOR)"

bonus:	$(OBJ_BONUS) $(INCLUDE)
		$(AR) $(NAME) $(OBJ_BONUS)


.c.o:	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		@$(RM) $(OBJECTS) $(OBJ_BONUS)
		@echo "$(BLUE)libft object files cleaned!$(DEF_COLOR)"

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus