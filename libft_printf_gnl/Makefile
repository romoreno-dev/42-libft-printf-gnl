# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 23:35:01 by romoreno          #+#    #+#              #
#    Updated: 2023/10/29 23:35:01 by romoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Silent Makefile (Doesnt print instructions on console)
# Variables
NAME 						:= libft.a
COMPILER 					:= gcc -Wall -Wextra -Werror -c
ARCHIVER 					:= ar rcs
REMOVER 					:= rm -rf
SRC_DIR						:= src/
OBJ_DIR						:= obj/

PRINT_TEXT					:= \033[0m
BOLD 						:= \033[1m
GREEN						:= \033[0;32m
BLUE						:= \033[0;94m

LIBFT_SRC_ROUTE 			:= $(SRC_DIR)libft/
PRINTF_SRC_ROUTE 			:= $(SRC_DIR)printf/
GET_NEXT_LINE_SRC_ROUTE 	:= $(SRC_DIR)get_next_line/
LIBFT_OBJ_ROUTE 			:= $(OBJ_DIR)libft/
PRINTF_OBJ_ROUTE 			:= $(OBJ_DIR)printf/
GET_NEXT_LINE_OBJ_ROUTE 	:= $(OBJ_DIR)get_next_line/

LIBFT_NAMEFILES 			:= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
								ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
								ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
								ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr \
								ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin \
								ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
								ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew \
								ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
								ft_lstclear ft_lstiter ft_lstmap
PRINTF_NAMEFILES 			:= ft_printf_implementation print_strings print_numbers print_numbers_utils
GET_NEXT_LINE_NAMEFILES 	:= get_next_line get_next_line_utils

# Files
LIBFT_SRC = 				$(addprefix $(LIBFT_SRC_ROUTE), $(addsuffix .c, $(LIBFT_NAMEFILES)))
PRINTF_SRC = 				$(addprefix $(PRINTF_SRC_ROUTE), $(addsuffix .c, $(PRINTF_NAMEFILES)))
GET_NEXT_LINE_SRC =  		$(addprefix $(GET_NEXT_LINE_SRC_ROUTE), $(addsuffix .c, $(GET_NEXT_LINE_NAMEFILES)))

LIBFT_OBJ = 				$(addprefix $(LIBFT_OBJ_ROUTE), $(addsuffix .o, $(LIBFT_NAMEFILES)))
PRINTF_OBJ = 				$(addprefix $(PRINTF_OBJ_ROUTE), $(addsuffix .o, $(PRINTF_NAMEFILES)))
GET_NEXT_LINE_OBJ = 		$(addprefix $(GET_NEXT_LINE_OBJ_ROUTE), $(addsuffix .o, $(GET_NEXT_LINE_NAMEFILES)))

# Rules
all:						$(NAME)

$(NAME):					$(LIBFT_OBJ) $(PRINTF_OBJ) $(GET_NEXT_LINE_OBJ)
							@$(ARCHIVER) $(NAME) $^

$(LIBFT_OBJ):				$(LIBFT_SRC)
							@mkdir -p $(LIBFT_OBJ_ROUTE)
							@$(COMPILER) $^
							@mv $(addsuffix .o, $(LIBFT_NAMEFILES)) $(LIBFT_OBJ_ROUTE)

$(PRINTF_OBJ):				$(PRINTF_SRC)
							@mkdir -p $(PRINTF_OBJ_ROUTE)
							@$(COMPILER) $^
							@mv $(addsuffix .o, $(PRINTF_NAMEFILES)) $(PRINTF_OBJ_ROUTE)

$(GET_NEXT_LINE_OBJ):		$(GET_NEXT_LINE_SRC)
							@mkdir -p $(GET_NEXT_LINE_OBJ_ROUTE)
							@$(COMPILER) $^
							@mv $(addsuffix .o, $(GET_NEXT_LINE_NAMEFILES)) $(GET_NEXT_LINE_OBJ_ROUTE)

clean:
							@$(REMOVER) obj/

fclean: 					clean
							@$(REMOVER) $(NAME)

re: 						fclean all

.PHONY: 					all clean fclean re
