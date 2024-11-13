# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 19:44:09 by dshvydka          #+#    #+#              #
#    Updated: 2024/11/13 13:56:54 by dshvydka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
NAME = libftprintf.a
RMF = rm -f
RMRF = rm -rf
AR = ar -rcs 
# r means that if the library already exists, replace the old files within the library with your new files. 
# c means create the library if it did not exist. 
# s can be seen to mean 'sort' (create a sorted index of) the library, so that it will be indexed and faster to access the functions in the library. 
# replace, create, sort.
LIBFT		= libft
INCLUDE 	= include
SRC_DIR		= src/
OBJ_DIR		= obj/

#Sources
SRC_FILES	=	ft_printf ft_printf_char ft_printf_str ft_printf_num_s ft_printf_num_u ft_printf_hex
SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF		=	.cache_exists

# Colors
DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
CYAN = \033[0;96m

###

all:	$(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RMRF) $(OBJ_DIR)
			@make clean -C $(LIBFT)
			@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean:		clean
			@$(RMF) $(NAME)
			@$(RMF) $(LIBFT)/libft.a
			@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
			@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)cleaned and rebuilt for ft_printf!$(DEF_COLOR)"

.PHONY:		all clean fclean re
